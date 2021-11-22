#include<iostream>
using namespace std;

int Area(int a){
    return a*a;
}
int Area(int a,int b){
    return a*b;
}
float Area(float r){
    return 22.0*r*r/7;
}
int main()
{
    int ch;
    int a,b;float r;
    while(1){
        cout << "\n1.Square\n2.Rectangle\n3.Circle\n4.Exit\nEnter Choice: ";
        cin >> ch;
        switch(ch){
            case 1:
            cout << "Enter side: \n";
            cin >> a;
            cout << "Area of Square: " << Area(a) << endl;
            break;
            case 2:
            cout << "Enter length: \n";
            cin >> a;
            cout << "Enter breadth: \n";
            cin >> b;
            cout << "Area of Rectangle: " << Area(a,b) << endl;
            break;
            case 3:
            cout << "Enter radius: \n";
            cin >> r;
            cout << "Area of Circle: " << Area(r) << endl;
            break;
            case 4:
            exit(0);
            default:
            cout << "Wrong Choice" << endl;
        }
    }
    return 0;
}