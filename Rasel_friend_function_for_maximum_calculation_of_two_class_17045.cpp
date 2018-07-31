#include <iostream>
using namespace std;

class B;
class A{
    int Adata;
public:
    A(){
        Adata=0;
    }
    A(int Adata){
        this->Adata=Adata;
    }
    void setA(int Adata){
        this->Adata=Adata;
    }
    int Maximum(B ob);
};

class B{
    int Bdata;
public:
    B(){
        Bdata = 0;
    }
    B(int Bdata){
        this->Bdata=Bdata;
    }
    void setB(int Bdata){
        this->Bdata=Bdata;
    }
    friend int A::Maximum(B ob);
};

int A::Maximum(B ob){
    if(ob.Bdata>Adata) return ob.Bdata;
    return Adata;
}

int main(){
    A ob(5);
    B ob1(10);
    cout<< "Maximum is : "<<ob.Maximum(ob1)<<endl;
}
