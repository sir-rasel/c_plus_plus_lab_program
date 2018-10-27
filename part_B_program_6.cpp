/*//////////////////
//  Part - B      //
//  Program - 6   //
//////////////////*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream inf("in.txt");
    ofstream outf("out.txt");

    char name[100],roll[100],section[100];
    int marks[6];

    inf.getline(name,100);
    inf.getline(roll,100);
    inf.getline(section,100);
    for(int i=0;i<5;i++){
        inf>>marks[i];
    }

    outf<<name<<"\n";
    outf<<roll<<"\n";
    outf<<section<<"\n";
    for(int i=0;i<5;i++){
        outf<<marks[i]<< " ";
    }
    inf.close();
    outf.close();
    return 0;
}
