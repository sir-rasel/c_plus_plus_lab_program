#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student{
    string name;
    string sex;
    int age,height,weight;
public:
    void getdata(){
        cout<< "Name: ";
        getline(cin,name);
        cout<< "Sex: ";
        getline(cin,sex);
        cout<< "Age: ";
        cin>>age;
        cout<< "Height: ";
        cin>>height;
        cout<< "Weight: ";
        cin>>weight;
    }
    void display(){
        cout<< "Name: "<<name<<endl;
        cout<< "Sex: "<<sex<<endl;;
        cout<< "Age: "<<age<<endl;;
        cout<< "Height: "<<height<<endl;;
        cout<< "Weight: "<<weight<<endl;
    }
};

int main(){
    ofstream classfile("studentInfo.txt");
    Student obj;
    obj.getdata();
    classfile.write((char*)&obj,sizeof(obj));
    classfile.close();

    cout<<endl;

    ifstream classOut("studentInfo.txt");
    Student ob1;
    classOut.read((char*)&ob1,sizeof(ob1));
    ob1.display();
    classOut.close();
    return 0;
}
