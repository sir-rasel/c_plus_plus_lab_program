/*//////////////////
//  Part - B      //
//  Program - 5   //
//////////////////*/

#include <iostream>
#include <cmath>

class polar {
    double radius;
    double angle;
    double getx() {
      return radius*cos(angle);
    }
    double gety() {
        return radius*sin(angle);
    }
public:
    polar() {
       radius=0.0;angle=0.0;
    }

    polar(double r,double a) {
      radius = r;
      angle = a;
    }

    void display() {
      cout << "Radius = "<<radius<<" , Angle = "<<angle<<endl;
    }

    polar operator + (polar o2) {
        polar temp;
        double x=getx()+o2.getx();
        double y=gety()+o2.gety();
        temp.radius = sqrt(x*x + y*y);
        temp.angle = atan(y/x);
        return temp;
    }
};

int main() {
     polar o1(10.0,2.0),o2(10.0,5.0),o3;

     o3=o1+o2;

     cout << "object 1: ";
     o1.display();
     cout << "object 2: ";
     o2.display();
     cout << "object 3: ";
     o3.display();

     return 0;
}
