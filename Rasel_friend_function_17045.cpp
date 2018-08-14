/*//////////////////
//  Part - A      //
//  Program - 2   //
//////////////////*/

#include <iostream>
using namespace std;

class Second;
class First{
    int num1;
public:
    First(){
        num1=0;
    }
    First(int n){
        num1=n;
    }
    friend void add(First ob1,Second ob2);
};

class Second{
    int num2;
public:
    Second(){
        num2=0;
    }
    Second(int n){
        num2=n;
    }
    friend void add(First ob1,Second ob2);
};

void add(First ob1,Second ob2){
    cout<<ob1.num1+ob2.num2<<endl;
}

int main(){
    First ob1(5);
    Second ob2(7);
    add(ob1,ob2);
    return 0;
}
