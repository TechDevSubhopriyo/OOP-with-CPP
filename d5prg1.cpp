#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class student{
    protected:
    int roll_no;
    string branch,subject;
    public:
    student(){}
    student(int r,string s,string b){
        roll_no=r;
        branch=b;
        subject=s;
    }
};
class InternalMarks:virtual public student{
    protected:
    int attendance,performance,labCopy;
    public:
    InternalMarks(){}
    InternalMarks(int r,string s,string b,int a,int p,int lc)
    :student(r,s,b){
        attendance=a;
        performance=p;
        labCopy=lc;
    }
};
class ExternalMarks:virtual public student{
    protected:
    int labExam,viva;
    public:
    ExternalMarks(){}
    ExternalMarks(int r,string s,string b,int le,int v)
    :student(r,s,b){
        labExam=le;
        viva=v;
    }
};
class Result:public InternalMarks,public ExternalMarks{
    public:
    Result(int r,string s,string b,int a,int p,int lc,int le,int v)
    :student(r,s,b),InternalMarks(r,s,b,a,p,lc),ExternalMarks(r,s,b,le,v){}
    void display(){
        cout<<roll_no<<','<<branch<<','<<subject<<endl;
        cout<<"Total Marks: "<<attendance+performance+labCopy+labExam+viva<<endl;
    }
};

int main()
{
    Result t(10,"OOP","CSE",18,20,20,15,20);
    t.display();
    return 0;
}