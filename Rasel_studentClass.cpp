/*//////////////////
//  Part - A      //
//  Program - 7   //
//////////////////*/

#include <iostream>
#include <string>
using namespace std;

class student{
    string name,semester,roll,section;
    int marks[5];
public:
    student(){
        name = "Unknown";
        semester = "Unknown";
        roll = "Unknown";
        section = "Unknown";
        for(int i=0;i<5;i++)
            marks[i] = 0;
    }
    void input(string n,string sem,string r,string sec,int num[]){
        name = n;
        semester = sem;
        roll = r;
        section = sec;
        for(int i=0;i<5;i++)
            marks[i] = num[i];
    }
    double average(){
        double ave=0;
        for(int i=0;i<5;i++) ave+=marks[i];
        ave/=5;
        return ave;
    }
    void display(){
        cout<<"Student Information:"<<endl;
        cout<< "Name: "<<name<<endl;
        cout<< "Semester: "<<semester<<endl;
        cout<< "Roll: "<<roll<<endl;
        cout<< "Section: "<<section<<endl;
        cout<< "Marks: ";
        for(int i=0;i<5;i++) cout<<marks[i]<<" ";
        cout<<endl;
    }
};

void getInformation(string &n,string &sem,string &r,string &sec,int num[]){
        cout<<"Student Information:"<<endl;
        cout<< "Name: ";
        getline(cin,n);
        cout<< "Semester: ";
        getline(cin,sem);
        cout<< "Roll: ";
        getline(cin,r);
        cout<< "Section: ";
        getline(cin,sec);
        cout<< "Marks: ";
        for(int i=0;i<5;i++) cin>>num[i];
}

int main(){
    string n,sem,r,sec;
    int num[5];
    student ob[2];
    cout<< "Get information: "<<endl;
    for(int i=0;i<2;i++){
        getInformation(n,sem,r,sec,num);
        ob[i].input(n,sem,r,sec,num);
    }
    for(int i=0;i<2;i++)
        if(ob[i].average()>=40)
            ob[i].display();

    return 0;
}
