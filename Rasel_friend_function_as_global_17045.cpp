#include <iostream>
using namespace std;

class reactangle;
class cost{
    int rate;
public:
    cost(){
        rate = 0;
    }
    cost(int rate){
        this->rate=rate;
    }
    void setRate(int rate){
        this->rate=rate;
    }
    int totalCost(reactangle ob);
};

class reactangle{
    int height,wide;
public:
    reactangle(){
        height = 0;
        wide = 0;
    }
    reactangle(int height,int wide){
        this->height=height;
        this->wide=wide;
    }
    void setReactangle(int height,int wide){
        this->height=height;
        this->wide=wide;
    }
    int area(){
        return height*wide;
    }
    friend int cost::totalCost(reactangle ob);
};

int cost::totalCost(reactangle ob){
    return rate*ob.height*ob.wide;
}

int main(){
    reactangle ob;
    cost ob1;
    ob.setReactangle(5,6);
    ob1.setRate(10);
    cout<< "Total Cost: "<<ob1.totalCost(ob)<<endl;
    return 0;
}
