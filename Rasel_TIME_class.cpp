/*//////////////////
//  Part - A      //
//  Program - 5   //
//////////////////*/

#include <iostream>
using namespace std;

class TIME{
    int hour,minute,second;
public:
    TIME(){
        hour = 0;
        minute = 0;
        second = 0;
    }
    void input(int h,int m,int s){
        hour = h;
        minute = m;
        second = s;
    }
    void display(){
        cout << "Time is : ";
        cout <<hour << " hour "<<minute<< " minute "<<second<< " second "<<endl;
    }
    friend TIME add(TIME a,TIME b);
};

TIME add (TIME a,TIME b){
    TIME res;
    res.second = a.second+b.second;
    res.minute = a.minute+b.minute;
    res.hour = a.hour+b.hour;
    if(res.second>59) res.minute++;
    if(res.minute>59) res.hour++;
    return res;
}

int main(){
    TIME a,b,c;
    cout<< "Give a object input: ";
    a.input(5,6,10);
    cout<< "Give b object input: ";
    b.input(10,20,30);
    c = add(a,b);
    cout<< "C object :"<<endl;
    c.display();
    return 0;
}
