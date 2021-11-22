#include<iostream>
using namespace std;

class MyComplex{
    double real,imagnr;
    public:
    MyComplex(){
        real=0.0;
        imagnr=0.0;
    }
    MyComplex(double a,double b){
        real=a;
        imagnr=b;
    }
    MyComplex(const MyComplex &m){
        real=m.real;
        imagnr=m.imagnr;
    }
    MyComplex operator+(MyComplex &m){
        MyComplex t;
        t.real = this->real+m.real;
        t.imagnr = this->imagnr+m.imagnr;
        return t;
    }
    MyComplex operator-(MyComplex &m){
        MyComplex t;
        t.real = this->real - m.real;
        t.imagnr = this->imagnr - m.imagnr;
        return t;
    }
    MyComplex operator*(MyComplex &m);

    friend ostream & operator<<(ostream &out,MyComplex m);
    friend istream & operator>>(istream &in,MyComplex &m);
};

MyComplex MyComplex::operator*(MyComplex &m){
    MyComplex t;
    t.real = (this->real * m.real) - (this->imagnr * m.imagnr);
    t.imagnr = (this->real * m.imagnr) + (this->imagnr * m.real);
    return t;
}
ostream & operator<<(ostream &out,MyComplex m){
    out<<m.real<<" + "<<m.imagnr<<"i\n";
    return out;
} 
istream & operator>>(istream &in,MyComplex &m){
    cout<<"Real: ";
    in>>m.real;
    cout<<"Imaginary: ";
    in>>m.imagnr;
    return in;
} 

int main(){
    MyComplex c1,c2,c3;
    cin>>c1;
    cout<<c1;
    cin>>c2;
    cout<<c2;
    c3=c1+c2;
    cout<<"Adding: "<<c3<<endl;
    c3=c1-c2;
    cout<<"Subtracting: "<<c3<<endl;
    c3=c1*c2;
    cout<<"Multiplying: "<<c3<<endl;
    return 0;
}