#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class String1{
    char* s;
    int len;
    public:
    String1(){
        len=1;
        s=new char[len];
        strcpy(s,"\0");
    }
    String1(char* a){
        len = strlen(a)+1;
        s=new char[len];
        strcpy(s,a);
    }
    String1(String1 &m){
        len=m.len;
        s=new char[len];
        strcpy(s,m.s);
    }
    String1 operator+(String1 &m);
    String1 operator=(const String1 &m);
    bool operator==(String1 &m);
    void display(){
        cout<<s<<endl;
    }
};
String1 String1::operator+(String1 &m){
    String1 temp;
    temp.len=m.len+this->len+1;
    temp.s=new char[temp.len];
    strcpy(temp.s,this->s);
    strcat(temp.s,m.s);
    return temp;
}
String1 String1::operator=(const String1 &m){
    this->len=strlen(m.s)+1;
    this->s = new char[this->len];
    strcpy(this->s,m.s);
    return *this;
}
bool String1::operator==(String1 &m){
    int i=0;
    while(i<len && i<m.len){
        if(m.s[i]!=this->s[i]){
            return false;
        }
        i++;
    }
    if(this->len== m.len)
        return true;
    else return false;
}

int main(){
    char a[100],b[100];
    cout<<"Input String 1: ";
    cin>>a;
    cout<<"Input String 2: ";
    cin>>b;
    
    String1 s1(a),s2(b),s3;
    
    s3 = s1+s2;

    s1.display();
    s2.display();
    s3.display();
    
    if (s1==s2)
        cout<<"Equal\n";
    else cout<<"Not Equal\n";
    return 0;
}