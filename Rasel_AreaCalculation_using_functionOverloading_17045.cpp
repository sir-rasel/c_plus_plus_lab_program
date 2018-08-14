/*//////////////////
//  Part - A      //
//  Program - 3   //
//////////////////*/

#include <iostream>
#include <cmath>
#define pi 2*acos(0.0)
using namespace std;

double area(double height,double wide){ // area of rectangle
    return height*wide;
}
double area(double a,double b,double c){ // area of triangle
    double s = (a+b+c)/2.0;
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
double area(double radius){ // area of circle
    return pi*radius*radius;
}

int main(){
    cout<< "Give height and wide of rectangle: ";
    double height,wide;
    cin>>height>>wide;
    cout << "Area of Rectangle: "<<area(height,wide)<<endl;

    cout<< "Give three sides of triangle: ";
    double a,b,c;
    cin>>a>>b>>c;
    cout << "Area of triangle: "<<area(a,b,c)<<endl;

    cout<< "Give radius of circle: ";
    double radius;
    cin>>radius;
    cout << "Area of circle: "<<area(radius)<<endl;
    return 0;
}
