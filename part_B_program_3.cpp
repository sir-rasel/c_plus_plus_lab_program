/*//////////////////
//  Part - B      //
//  Program - 3   //
//////////////////*/

#include<iostream>
#include<string>
using namespace std;

class student{
    string name,roll;
public:
    student(){
        name = "unknown";
        roll = "unknown";
    }
    void putdata(string n,string r){
        name = n;
        roll = r;
    }
    void getdata(){
        cout<< "Name: "<<name<<endl;
        cout<< "Roll: "<<roll<<endl;
    }
};

class exam:public student{
protected:
    int marks[6];
public:
    exam(){
       for(int i=0;i<6;i++){
            marks[i]=0;
       }
    }
    void putdata(string n,string r,int *a){
        student::putdata(n,r);
        for(int i=0;i<6;i++){
            marks[i]=a[i];
       }
    }
    void getdata(){
        student::getdata();
        cout<< "Marks of student: ";
        for(int i=0;i<6;i++){
            cout<<marks[i]<< " ";
        }
        cout<<endl;
    }
};

class result:public exam{
    int totalMarks;
public:
    result(){
        totalMarks = 0;
    }
    void putdata(string n,string r,int *a){
        exam::putdata(n,r,a);
        for(int i=0;i<6;i++){
            totalMarks+=marks[i];
        }
    }
    void getdata(){
        exam::getdata();
        cout<< "Total Marks : "<<totalMarks<<endl;
    }
};

void getInformation(string &name,string &roll,int marks[]){
    cout<< "Name: ";
    getline(cin,name);
    cout<< "Roll: ";
    getline(cin,roll);
    cout<< "Marks in six subject: ";
    for(int i=0;i<6;i++) cin>>marks[i];
}

int main(){
    result ob;
    string name,roll;
    int marks[6];
    getInformation(name,roll,marks);
    ob.putdata(name,roll,marks);
    ob.getdata();
    return 0;
}
