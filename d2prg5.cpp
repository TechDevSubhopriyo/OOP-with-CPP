#include<iostream>
using namespace std;

class Time{
    private:
    int h,m,s;
    public:
    void display();
    void addTime(Time,Time);
    void setTime(int hh,int mm,int ss){
        h=hh;
        m=mm;
        s=ss;
    }
};
void Time::display(){
    m=m+s/60;
    s=s%60;
    h=h+m/60;
    m=m%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
}
void Time::addTime(Time t1,Time t2){
    h=t1.h+t2.h;
    m=t1.m+t2.m;
    s=t1.s+t2.s;
}

int main(){
    Time t1,t2;
    int h,m,s;
    cout<<"Time 1:\n";
    cout<<"Enter h: ";
    cin>>h;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter s: ";
    cin>>s;
    t1.setTime(h,m,s);
    t1.display();
    cout<<"Time 2:\n";
    cout<<"Enter h: ";
    cin>>h;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter s: ";
    cin>>s;
    t2.setTime(h,m,s);
    t2.display();
    Time t;
    cout<<"adding- \n";
    t.addTime(t1,t2);
    t.display();
    return 0;
}