/*//////////////////
//  Part - B      //
//  Program - 7   //
//////////////////*/

#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream fin("withSpace.txt");
    ofstream fout("withoutSpace.txt");
    string s;
    while(fin>>s){
        fout<<s;
    }
    return 0;
}
