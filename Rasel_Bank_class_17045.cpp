#include <iostream>
using namespace std;

class BankAccount{
    double balance;
public:
    BankAccount();
    void deposit(double taka);
    void withdraw(double taka);
    void showBalance();
};

BankAccount::BankAccount(){
    balance = 0;
}
void BankAccount::deposit(double taka){
    balance+=taka;
}
void BankAccount::withdraw(double taka){
    if(taka>balance) cout<< "Insufficient balance"<<endl;
    else balance-=taka;
}
void BankAccount::showBalance(){
    cout<< "Present balance: "<<balance<<endl;
}

int main(){
    BankAccount user[10];
    while(1){
        int id,choice;
        cout<< "Enter user id (0-9) and transaction choice (1 for deposit, 2 for withdraw, 3 for check Balance) : ";
        cin>>id>>choice;
        if(choice==1){
            double taka;
            cout<< "Enter amount of taka: ";
            cin>>taka;
            user[id].deposit(taka);
            user[id].showBalance();
        }
        else if(choice==2){
            double taka;
            cout<< "Enter amount of taka: ";
            cin>>taka;
            user[id].withdraw(taka);
            user[id].showBalance();
        }
        else if(choice==3) user[id].showBalance();
        else cout<< "Invalid choice"<<endl;
    }
    return 0;
}
