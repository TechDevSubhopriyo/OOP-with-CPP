#include<iostream>
using namespace std;

class Account{
    public:
    long acc;
    private:
    float balance;
    public:
    void assign(long a,float b){
        acc=a;
        balance=b;
    }
    void display()
    {
        cout<<"Acc No- "<<acc<<endl;
        cout<<"Balance- "<<balance<<endl;
    }
    void moneyTransfer(Account *a){
        float amt;        
        cout<<"Enter amount- ";
        cin>>amt;
        if(amt>balance){
            cout<<"Insufficient Balance\n";
            return;
        }
        balance=balance-amt;
        (*a).balance=(*a).balance+amt;
        cout<<"Transfer done\n";
    }
};

int main()
{
    Account ac[50];
    int pos=0,fl=0;
    int ch;long a,fa;float b;
    while(1){
        cout << "\n1. Assign\n2. Display\n3. Transfer\n4. Exit\nEnter Choice\n";
        cin >> ch;
        switch(ch){
            case 1:
                cout<<"Enter Acc no- ";
                cin >> a;
                cout<<"Enter Opening Balance- ";
                cin >> b;
                ac[pos].assign(a,b);
                pos=pos+1;
                break;
            case 2:
                cout<<"Enter Acc no- ";
                cin >> a;
                fl=0;
                for(int i=0;i<=pos;i++){
                    if(ac[i].acc==a){
                        fl=1;
                        ac[i].display();
                        break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Acc no not present\n";
                }  
                break;
            case 3:
                cout<<"From Acc no- ";
                cin >> fa;
                cout<<"To Acc no- ";
                cin >> a;
                fl=0;
                for(int i=0;i<=pos;i++){
                    if(ac[i].acc==fa){
                        for(int j=0;j<=pos;j++){
                            if(ac[j].acc==a){
                                fl=1;
                                ac[i].moneyTransfer(&ac[j]);
                                break;
                            }
                        }
                        break;
                    }
                }
                if(fl==0)
                {
                    cout<<"Acc no not present\n";
                }  
                break;
            case 4:exit(0);
            default:
            cout<<"Wrong Choice\n";
        }
    }
    return 0;
}