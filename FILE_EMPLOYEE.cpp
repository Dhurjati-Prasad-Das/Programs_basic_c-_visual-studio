#include<fstream>
#include<iostream>
using namespace std;
int main(){
    struct employee{
        char name[20];
        int age;
        float basic;
        float gross;
    };
    employee e;
    char ch='Y';
    ofstream outfile;
    outfile.open("Sample3.DAT",ios::out|ios::binary);
    while(ch=='Y'|ch=='y'){
        cout<<endl<<"Enter a record";
        cin>>e.name>>e.age>>e.basic>>e.gross;
        outfile.write((char*)&e,sizeof(e));
        cout<<endl<<"ADD another record Y yes N no\n";
        cin>>ch;
    }
    outfile.close();
    ifstream infile;
    infile.open("Sample3.DAT",ios::in|ios::binary);
    while(infile.read((char*)&e,sizeof(e))){
        cout<<endl<<e.name<<endl<<e.age<<endl<<e.basic<<endl<<e.gross<<endl;
    }

}