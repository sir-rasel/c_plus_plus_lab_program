/*//////////////////
//  Part - B      //
//  Program - 4   //
//////////////////*/

#include<iostream>
using namespace std;

class shape{
protected:
    double height,base;
public:
    shape(){
        height = 0;
        base = 0;
    }
    void putdata(double h,double b){
        height = h;
        base = b;
    }
    virtual void displayArea()=0;
};

class triangle:public shape{
public:
    virtual void displayArea(){
        cout<< "Area of triangle is: "<< (0.5)*height*base<<endl;
    }
};

class rectangle:public shape{
    virtual void displayArea(){
        cout<< "Area of rectangle is: "<< height*base<<endl;
    }
};

void getInformation(double &height,double &base){
    cout<< "Height: ";
    cin>>height;
    cout<< "Base: ";
    cin>>base;
}

int main(){
    shape *p;
    triangle tr;
    rectangle re;
    double h,b;

    cout<< "Get triangle information: ";
    getInformation(h,b);
    tr.putdata(h,b);
    cout<< "Get rectangle information: ";
    getInformation(h,b);
    re.putdata(h,b);

    p = &tr;
    p->displayArea();
    p = &re;
    p->displayArea();
    return 0;
}
