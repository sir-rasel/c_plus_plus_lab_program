#include <iostream>
using namespace std;

class objectCounter{
    static int cnt;
    static int data;
public:
    static void set(int num){
        cnt++;
        data=num;
    }
    static void show(){
        cout<< "This is "<<cnt<<" number object of class objectCounter"<<endl;
    }
};

int objectCounter::cnt;
int objectCounter::data;

int main(){
    objectCounter ob2;
    objectCounter::set(5);
    objectCounter::show();

    return 0;
}
