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
        cout<< "Distance is "<<meter <<" meter "<<centimeter<< " centimeter."<< endl;
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
        cout<< "Distance is "<<foot <<" foot "<<inch<< " inch."<< endl;
    }
    friend DM add(DM ob1,DB ob2);
    friend DB add(DB ob1,DM ob2);
};

DM add(DM ob1,DB ob2){
    DM temp;
    temp.meter = ob1.meter;
    temp.centimeter = ob1.centimeter+((ob2.foot*30.48)+(ob2.inch*2.54));
    if(temp.centimeter>=100) {
        temp.meter+=(temp.centimeter/100.0);
        temp.centimeter = temp.centimeter%100;
    }
    return temp;
}
DB add(DB ob1,DM ob2){
    DB temp;
    temp.foot = ob1.foot;
    temp.inch = ob1.inch+((ob2.centimeter*0.3937)+(ob2.meter*39.37));
    if(temp.inch>=12){
        temp.foot+=(temp.inch/12.0);
        temp.inch=temp.inch%12;
    }
    return temp;
}

int main(){
    DM ob1,ob2;
    DB ob3,ob4;
    ob1.input(10,55);
    ob3.input(23,10);

    ob2 = add(ob1,ob3);
    ob2.display();

    ob4 = add(ob3,ob1);
    ob4.display();
    return 0;
}
