#include<iostream>
using namespace std;

class Complex{
    private:
    int r,im;
    public:
    void getData(){
        cout<<"Real Part: ";
        cin>>r;
        cout<<"Imaginary Part: ";
        cin>>im;
    }
    void showData(){
        cout<<r<<"+"<<im<<"i\n";
    }
    Complex addComplex(Complex c1){
        Complex c;
        c.r=c1.r+r;
        c.im=c1.im+im;
        return c;
    }
    Complex subComplex(Complex c1){
        Complex c;
        c.r=c1.r-r;
        c.im=c1.im-im;
        return c;
    }
    Complex mulComplex(Complex c1){
        Complex c;
        c.r=c1.r*r-(c1.im*im);
        c.im=c1.im*r+c1.r*im;
        return c;
    }
    Complex mulComplex(int val){
        Complex c;
        c.r=r*val;
        c.im=im*val;
        return c;
    }
};

int main(){
    Complex c1,c2,c;
    int v;
    cout<<"Complex 1: \n";
    c1.getData();
    cout<<"Complex 2: \n";
    c2.getData();
    while(1){
        cout<<"\n1. Show\n2. Add\n3. Sub\n4. Mul Complex\n5. Mul Value\n6. Exit\nEnter Choice: ";
        int ch;
        cin >> ch;
        switch(ch){
            case 1:
                c1.showData();
                c2.showData();
                break;
            case 2:
                c=c1.addComplex(c2);
                c.showData();
                break;
            case 3:
                c=c2.subComplex(c1);
                c.showData();
                break;
            case 4:
                c=c1.mulComplex(c2);
                c.showData();
                break;
            case 5:
                cout<<"Enter Value: ";
                cin>>v;
                c =c1.mulComplex(v);
                c.showData();
                c =c2.mulComplex(v);
                c.showData();
                break;
            case 6:
                exit(0);
            default:
                cout<<"Wrong Choice\n";
        }
    }
    return 0;
}