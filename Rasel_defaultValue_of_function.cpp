/*//////////////////
//  Part - A      //
//  Program - 4   //
//////////////////*/

#include <iostream>
using namespace std;

double power(double m,double n=2){
    double result=1;
    for(int i=0;i<n;i++){
        result*=m;
    }
    return result;
}

int main(){
    cout<<"Give the m to the power n: ";
    double m;
    int n;
    cin>>m>>n;
    cout<< "Power result: "<<power(m,n)<<endl;
    cout<< "Power result (default): "<<power(m)<<endl;
    return 0;
}
