/*//////////////////
//  Part - A      //
//  Program - 5   //
//////////////////*/

#include <iostream>
using namespace std;

class complexNumber{
    int real;
    int imaginary;
public:
    complexNumber(){}
    complexNumber(int value){
        real = value;
        imaginary = value;
    }
    complexNumber(int val1,int val2){
        real = val1;
        imaginary = val2;
    }
    complexNumber operator +(complexNumber ob){
        complexNumber temp;
        temp.real = real+ob.real;
        temp.imaginary = imaginary+ob.imaginary;
        return temp;
    }
    void output(){
        cout<<real<< " + "<<imaginary<< "i"<<endl;
    }
};

int main(){
    complexNumber a(5),b(5,7),c;
    cout<< "a : ";
    a.output();
    cout<< "b : ";
    b.output();
    c = a+b;
    cout<< "c : ";
    c.output();
    return 0;
}
