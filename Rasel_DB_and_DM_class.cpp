/*//////////////////
//  Part - A      //
//  Program - 9   //
//////////////////*/

#include <iostream>
using namespace std;

class DB;
class DM{
    int meter,centimeter;
public:
    DM(){
        meter = 0;
        centimeter = 0;
    }
    void input(int m,int cm){
        meter = m;
        centimeter = cm;
    }
    void display(){
        cout<< "Distance is "<<meter <<" meter"<<centimeter<< " centimeter."<< endl;
    }
    friend DM add(DM ob1,DB ob2);
    friend DB add(DB ob1,DM ob2);
};

class DB{
    int foot,inch;
public:
    DB(){
        foot = 0;
        inch = 0;
    }
    void input(int ft,int in){
        foot = ft;
        inch = in;
    }
    void display(){
        cout<< "Distance is "<<foot <<" foot"<<inch<< " inch."<< endl;
    }
    friend DM add(DM ob1,DB ob2);
    friend DB add(DB ob1,DM ob2);
};

int main(){
    DM ob1(10,55);
    DB ob2(23,10);
    return 0;
}
