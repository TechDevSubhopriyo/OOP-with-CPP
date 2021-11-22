#include<iostream>
using namespace std;
int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
class Date{
    int day,month,year;
    public:
    Date(){
        day=1;
        month=1;
        year=2000;
    }
    Date(int a,int b, int c){
        day=a;
        month=b;
        year=c;
    }
    Date(Date &d){
        day=d.day;
        month=d.month;
        year=d.year;
    }
    Date operator+(int);
    Date operator-(int);
    friend ostream & operator<<(ostream &,Date &);
};
Date Date::operator+(int d){
    Date date(*this);
    
    while(d>0){
        if(d>(days[date.month-1]-date.day)){
            d=d-(days[date.month-1]-date.day+1);
            date.day=1;
            date.month+=1;
        }
        else{
            date.day+=d;
            d=0;
        }
        if(date.month>12){
            date.year+=1;
            date.month=1;
        }
    }
    return date;
}
ostream & operator<<(ostream &out,Date &d){
    out<<d.day<<"-"<<d.month<<"-"<<d.year<<endl;
    return out;
}
int main()
{
    int a,b,c;
    cout<<"Date: ";
    cin>>a;
    cout<<"Month: ";
    cin>>b;
    cout<<"Year: ";
    cin>>c;
    Date d1(a,b,c),d2;
    cout<<d1;
    cout<<"Days: ";
    cin>>a;
    d2=d1+a;
    cout<<"Date after "<<a<<" days: ";
    cout<<d2;
    return 0;
}