#include<iostream>
using namespace std;

class Account{
    public:
    long accno;
    private:
    string name;
    float balance;
    public:
    void assign(string n,long a,float b){
        name=n;
        accno=a;
        balance=b;
    }
    void deposit(){
        float f;
        cout<<"Enter Amount- ";
        cin>> f;
        balance=balance+f;
        display();
    }
    void withdraw(){
        float f;
        cout<<"Enter Amount- ";
        cin>> f;
        if(f>=balance){
            cout<<"Insufficient Funds\n";
            return;
        }
        balance=balance-f;
        display();
    }
    void display(){
        cout << "Name- " << name << endl;
        cout << "Balance- " << balance << endl;
    }
};

int main()
{
    Account acc[50];
    int pos=0;
    int ch;int fl=0;
    string n;long a;float b;
    while(1){
        cout << "\n1. Create Account\n2. Deposit\n3. Withdraw\n4. View Balance\n5. Exit\nEnter Choice\n";
        cin >> ch;
        switch(ch){
            case 1:
                cout<<"Enter Name- ";
                getline(cin >> ws, n);
                cout<<"Enter Account Number- ";
                cin >> a;
                cout<<"Enter Opening Balance- ";
                cin >> b;
                acc[pos].assign(n,a,b);
                pos++;
                break;
            case 2:
                cout<<"Enter Account Number- ";
                cin >> a;
                fl=0;
                for(int i=0;i<=pos;i++){
                    if(acc[i].accno==a){
                        fl=1;
                        acc[i].deposit();
                        break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Acc no not present\n";
                }  
                break;
            case 3:
                cout<<"Enter Account Number- ";
                cin >> a;
                fl=0;
                for(int i=0;i<pos;i++){
                    if(acc[i].accno==a){
                        fl=1;
                        acc[i].withdraw();
                        break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Acc no not present\n";
                }  
                break;
            case 4:
                cout<<"Enter Account Number- ";
                cin >> a;
                fl=0;
                for(int i=0;i<pos;i++){
                    if(acc[i].accno==a){
                        fl=1;
                        acc[i].display();
                        break;
                    }
                }
                if(fl==0){
                    cout<<"Acc no not present\n";
                } 
                break;
            case 5: exit(0);
            default: cout<< "Wrong Choice\n";
        }
    }
    return 0;
}