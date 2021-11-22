#include<iostream>
using namespace std;

class Time{
    private:
    int hh,mm,ss;
    public:
    void setTime(int h,int m,int s){
        hh=h;
        mm=m;
        ss=s;
    }
    Time addTime(Time t1){
        Time t;
        t.ss=t1.ss+ss;
        t.mm = t1.mm+mm;
        t.hh = hh+t1.hh;
        return t;
    }
    void showTime(){
        mm=mm+ss/60;
        ss=ss%60;
        hh=hh+mm/60;
        mm=mm%60;
        cout<<hh<<":"<<mm<<":"<<ss<<endl;
    }
};

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
    t1.showTime();
    cout<<"Time 2:\n";
    cout<<"Enter h: ";
    cin>>h;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter s: ";
    cin>>s;
    t2.setTime(h,m,s);
    t2.showTime();
    Time t = t1.addTime(t2);
    cout<<"Adding times\n";
    t.showTime();
    return 0;
}