#include<iostream>
using namespace std;

class MyClass{
    int a;
    public:
    MyClass(){
        a=0;
        cout<<"Constructing... "<<a<<endl;
    }
    MyClass(int i){
        cout<<"Constructing... "<<endl;
        cout<<"Value Passed- "<<i<<endl;
        a=i;
    }
    ~MyClass(){
        cout<<"Destructing... "<<a<<endl;
    }
    void display(){
        cout<<"Value- "<<a<<endl;
    }
};
MyClass gm;

void f(){
    MyClass m1;
    cout<<"In Function"<<endl;
}
int main()
{
    MyClass m(5);
    m.display();
    MyClass m2[2];
    MyClass m1;
    cout<<"In Main"<<endl;
    f();
    m1.display();
    return 0;
}