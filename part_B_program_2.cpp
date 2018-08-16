/*//////////////////
//  Part - B      //
//  Program - 2   //
//////////////////*/

#include <iostream>
#include <cstring>
using namespace std;

class String{
    char *p;
    int len;
public:
    String(){
        len = 0;
        p = 0;
    }
    void set(char *a){
        len = strlen(a);
        p = new char[len+1];
        strcpy(p,a);
    }
    void display(){
        cout<<p<< " "<<len<<endl;
    }
    String operator+(String ob){
        String temp;
        temp.len = len+ob.len;
        temp.p = new char[temp.len+1];
        strcpy(temp.p,p);
        strcat(temp.p,ob.p);
        return temp;
    }
    String operator=(String ob){
        len = ob.len;
        p = new char[len+1];
        strcpy(p,ob.p);
        return *this;
    }
    ~String(){
        delete p;
    }
};

int main(){
    String ob,ob1,ob2;
    char a[]="Saiful",b[]=" Islam";

    ob.set(a);
    ob.display();
    ob1.set(b);
    ob1.display();

    ob2 = ob1;
    ob2.display();

    ob2 = ob+ob1;
    ob2.display();
    return 0;
}
