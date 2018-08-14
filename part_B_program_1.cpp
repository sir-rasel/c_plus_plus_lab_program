/*//////////////////
//  Part - B      //
//  Program - 1   //
//////////////////*/

#include <iostream>
#include <string>
using namespace std;

class first{
protected:
    string bookNo,bookName;
public:
    first(){
        bookNo = "unknown";
        bookName = "unknown";
    }
    void putdata(string bno,string bna){
        bookNo = bno;
        bookName = bna;
    }
    void getdata(){
        cout<< "Book no: "<<bookNo<<endl;
        cout<< "Book name: "<<bookName<<endl;
    }
};

class second{
protected:
    string authorName,publisher;
public:
    second(){
        authorName = "unknown";
        publisher = "unknown";
    }
    void putdata(string an,string pub){
        authorName = an;
        publisher = pub;
    }
    void getdata(){
        cout<< "Author name: "<<authorName<<endl;
        cout<< "Publisher: "<<publisher<<endl;
    }
};

class third:public first,public second{
    int numberOfPage,yearOfpublication;
public:
    third(){
        numberOfPage = yearOfpublication = 0;
    }
    void putdata(string bno,string bna,string an,string pub,int page,int year){
        first::putdata(bno,bna);
        second::putdata(an,pub);
        numberOfPage = page;
        yearOfpublication = year;
    }
    void getdata(){
        first::getdata();
        second::getdata();
        cout<< "Page number: "<<numberOfPage<<endl;
        cout<< "Publication Year: "<<yearOfpublication<<endl;
    }
};

void getInformation(string &bno,string &bna,string &an,string &pub,int &page,int &year){
    cout<< "Book no: ";
    getline(cin,bno);
    cout<< "Book name: ";
    getline(cin,bna);
    cout<< "Author name: ";
    getline(cin,an);
    cout<< "Publisher: ";
    getline(cin,pub);
    cout<< "Page number: ";
    cin>>page;
    cout<< "Publication Year: ";
    cin>>year;
}

int main(){
    string bno,bna,an,pub;
    int page,year;
    third book[10];
    cout<< "Give books information: "<<endl;
    for(int i=0;i<10;i++){
        getInformation(bno,bna,an,pub,page,year);
        book[i].putdata(bno,bna,an,pub,page,year);
    }
    cout<< "Books information: "<<endl;
    for(int i=0;i<10;i++) book[i].getdata();
    return 0;
}
