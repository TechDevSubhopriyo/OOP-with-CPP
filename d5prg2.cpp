#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Father{
    protected:
    string name;
    int age;
    public:
    Father(){}
    Father(string n,int a){
        name=n;
        age=a;
    }
    virtual void show(){
        cout<<"Name- "<<name<<"\nAge- "<<age<<endl;
    }
};
class Son:public Father{
    private:
    string name;
    int age;
    public:
    Son(){}
    Son(string n,int a,string n1,int a1):Father(n1,a1){
        name=n;
        age=a;
    }
    void show(){
        cout<<"Name- "<<Father::name<<"\nAge- "<<Father::age<<endl;
        cout<<"Name- "<<name<<"\nAge- "<<age<<endl;
    }
};
int main(){
    Father *ptr;
    Son s("Son",20,"Father",50);
    ptr=&s;
    ptr->show();
    return 0;
}