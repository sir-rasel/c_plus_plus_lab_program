/*//////////////////
//  Part - A      //
//  Program - 8   //
//////////////////*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    string name,accountNumber,typesOfAccount;
    double balance;
public:
    BankAccount(){
        name = "Unknown";
        accountNumber = "Unknown";
        typesOfAccount = "Unknown";
        balance = 0;
    }
    void input(string n,string an,string toa,double amount){
        name = n;
        accountNumber = an;
        typesOfAccount = toa;
        balance = amount;
    }
    void display(){
        cout<<"Customer Information:"<<endl;
        cout<< "Name: "<<name<<endl;
        cout<< "Account Number: "<<accountNumber<<endl;
        cout<< "Types of Account: "<<typesOfAccount<<endl;
        cout<< "Balance: "<<balance<<endl;
        cout<<endl;
    }
    void deposit(double amount){
        balance+=amount;
    }
    void withdraw(double amount){
        if(amount>balance) cout<< "Account balance overflow"<<endl;
        else{
            balance-=amount;
        }
    }
};

void getInformation(string &n,string &an,string &toa,double amount){
        cout<<"Customer Information:"<<endl;
        cout<< "Name: ";
        getline(cin,n);
        cout<< "Account number: ";
        getline(cin,an);
        cout<< "Types of account: ";
        getline(cin,toa);
        cout<< "Account balance: ";
        cin>>amount;
}

int main(){
    string n,an,toa;
    double amount;
    BankAccount customer[10];
    cout<< "Get information: "<<endl;
    for(int i=0;i<10;i++){
        getInformation(n,an,toa,amount);
        customer[i].input(n,an,toa,amount);
    }
    for(int i=0;i<10;i++)
        customer[i].display();

    while(1){
        int choice;
        cout<< "Give your choice (1 for deposit, 2 for withdraw or anything for exit) : ";
        cin>>choice;
        if(choice==1){
            double amount;
            int id;
            cout<< "Give customer serial and amount: ";
            cin>>id>>amount;
            customer[id].deposit(amount);
        }
        else if(choice==2){
            double amount;
            int id;
            cout<< "Give customer serial and amount: ";
            cin>>id>>amount;
            customer[id].withdraw(amount);
        }
        else break;
    }
    for(int i=0;i<10;i++)
        customer[i].display();
    return 0;
}
