#include<iostream>
using namespace std;

class MyClass{
    static int a;
    public:
    MyClass(){
        cout<<"Constructing... "<<++a<<endl;
    }
    MyClass(int i){
        cout<<"Constructing... "<<++a<<endl;
        cout<<"Value Passed- "<<i<<endl;
    }
    ~MyClass(){
        cout<<"Destructing... "<<a<<endl;
        a=a-1;
    }
    void display(){
        cout<<"Count- "<<a<<endl;
    }
};
MyClass gm;
int MyClass::a=0;
void f(){
    MyClass m1;
    cout<<"In Function"<<endl;
}
int main()
{
    MyClass m[2];
    MyClass m1;
    cout<<"In Main"<<endl;
    f();
    m1.display();
    return 0;
}