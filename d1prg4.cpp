#include<iostream>
using namespace std;

typedef struct Pair{
    int a,b;
    void accept();
    void display();
} Pair;

void Pair::accept(){
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
}
void Pair::display(){
    cout<<"a- "<<a<<endl;
    cout<<"b- "<<b<<endl;
}

void order(int *a,int *b){
    if(*a>*b){
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
    }
}

int main(){
    Pair p;
    p.accept();
    cout<<"Before Order Call\n";
    p.display();
    order(&p.a,&p.b);
    cout<<"After Order Call\n";
    p.display();
    return 0;
}