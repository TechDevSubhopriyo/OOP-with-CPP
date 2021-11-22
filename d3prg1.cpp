#include<iostream>
using namespace std;
class B;
class A{
    private:
    int data1;
    public:
    void set(int a){
        data1=a;
    }
    friend void addBoth(A,B);
};

class B{
    private:
    int data2;
    public:
    void set(int b){
        data2=b;
    }
    friend void addBoth(A,B);
};
void addBoth(A a,B b){
    cout<<"Sum is "<<a.data1+b.data2<<endl;
}
int main(){
    A a;
    B b;
    int x,y;
    cout<<"Enter Value: ";
    cin>>x;
    cout<<"Enter Value: ";
    cin>>y;
    a.set(x);
    b.set(y);
    addBoth(a,b);
    return 0;
}