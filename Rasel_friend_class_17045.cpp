#include <iostream>
using namespace std;

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
    friend class cost;
};

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
    int totalCost(reactangle ob){
        return rate*ob.height*ob.wide;
    }
    void showReactangle(reactangle ob){
        cout<<"Height: "<<ob.height<<endl;
        cout<<"Wide: "<<ob.wide<<endl;
        cout<<"Sum of height and wide: "<<ob.height+ob.wide<<endl;
    }
};

int main(){
    reactangle ob;
    cost ob1;
    ob.setReactangle(5,6);
    ob1.setRate(10);
    cout<< "Total Cost: "<<ob1.totalCost(ob)<<endl;
    ob1.showReactangle(ob);
    return 0;
}
