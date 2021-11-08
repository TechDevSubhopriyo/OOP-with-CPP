#include<iostream>
using namespace std;

class Employee;
class Boss{
    int id;
    string name;
    public:
    Boss(){
        id=0;name="";
    }
    Boss(int i,string n){
        id=i;
        name=n;
    }
    void salaryHike(Employee &,float);
    void show(){
        cout<<"ID- "<<id<<"\nName- "<<name<<endl;
    }
};
class Employee{
    int id;
    float sal;
    string name;
    public:
    Employee(){
        id=0;name="";sal=0;
    }
    Employee(int i,string n,float f=0.0){
        id=i;
        name=n;
        sal=f;
    }
    void set(int i,string n,float f=0.0){
        id=i;
        name=n;
        sal=f;
    }
    void display(){
        cout<<"ID- "<<id<<"\nName- "<<name<<"\nSalary- "<<sal<<endl;
    }
    int getId(){
        return id;
    }
    friend void Boss::salaryHike(Employee &,float );
};
void Boss::salaryHike(Employee &e,float f){
    e.sal=e.sal+f;
}
int main(){
    Employee e[50];
    int p=0,fl=0;
    int ch;int i;string n;float v;
    Boss b(2,"Subho");
    
    while(1){
        cout<<"1. Create\n2. Display\n3. Salary Hike\n4.Exit\nEnter choice: ";
        cin>>ch;
        switch(ch){
            case 1:
                cout<<"ID- ";
                cin>>i;
                cout<<"Name- ";
                cin>>n;
                cout<<"Salary- ";
                cin>>v;
                e[p].set(i,n,v);
                p++;
                break;
            case 2:
                cout<<"ID- ";
                cin>>i;
                fl=0;
                for(Employee em: e){
                    if(em.getId()==i){
                        em.display();
                        fl=1;
                        break;
                    }
                }
                if(fl==0){
                    cout<<"Not Found\n";
                }
                break;
            case 3:
                cout<<"ID- ";
                cin>>i;
                cout<<"Hike- ";
                cin>>v;
                fl=0;
                for(int o=0;o<=p;o++)
                {
                    if(e[0].getId()==i){
                        b.salaryHike(e[o],v);
                        e[o].display();
                        fl=1;
                        break;
                    }
                }
                if(fl==0){
                    cout<<"Not Found\n";
                }
                break;
            case 4:
                exit(0);
            case 5:
                cout<<"Wrong Choice\n";
        }
    }
    
    return 0;
}