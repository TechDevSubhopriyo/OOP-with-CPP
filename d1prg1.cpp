#include<iostream>
using namespace std;

inline int max(int a,int b)
{
    return (a>b)?a:b;
}

int main()
{
    int a,b,c;
    cout << "Enter a number: " << endl;
    cin >> a;
    cout << "Enter another number: " << endl;
    cin >> b;
    cout << "Enter another number: " << endl;
    cin >> c;
    cout << "Max is: " << max(max(a,b),c) << endl;
    return 0;
}