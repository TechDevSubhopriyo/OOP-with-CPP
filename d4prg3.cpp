#include<iostream>
using namespace std;

class Counter{
    int c;
    public:
    Counter()
    {
        c=0;
    }
    Counter(int a)
    {
        c=a;
    }
    Counter(Counter &c1)
    {
        c=c1.c;
    }
    friend istream & operator>>(istream & in,Counter &);
    friend ostream & operator<<(ostream & out,Counter &);
    Counter operator++();
    Counter operator++(int);
    Counter operator--();
    Counter operator--(int);
};
istream & operator>>(istream & in,Counter &c1){
    cout<<"Enter Value: ";
    in>>c1.c;
    return in;
}
ostream & operator<<(ostream & out,Counter &c1){
    out<<" Value: "<<c1.c<<endl;
    return out;
}
Counter Counter::operator++(){
    ++c;
    return *this;
}
Counter Counter::operator--(){
    --c;
    return *this;
}
Counter Counter::operator++(int){
    Counter t(*this);
    c++;
    return t;
}
Counter Counter::operator--(int){
    Counter t(*this);
    c--;
    return t;
}
int main()
{
    Counter c1,c2,c3;
    cin>>c1;
    cout<<c1;
    cin>>c2;
    cout<<c2;
    c3=++c1;
    cout<<"C1: ";
    cout<<c1;
    cout<<"C3: ";
    cout<<c3;
    c3=c2--;
    cout<<"C2: ";
    cout<<c2;
    cout<<"C3: ";
    cout<<c3;
    return 0;
}