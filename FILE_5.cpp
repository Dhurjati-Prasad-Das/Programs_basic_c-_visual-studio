#include<fstream>
#include<iostream>
using namespace std;
int func();
int main(){
    ofstream outfile("Sample.txt");
    char ch='Z';
    int i=25;
    float a=475.43f;
    char str[]="Hyberbole!";
    outfile<<ch<<endl<<i<<endl<<a<<endl<<str;
    outfile.close();
    ifstream infile("Sample.txt");
    infile>>ch>>i>>a>>str;
    cout<<ch<<endl<<i<<endl<<a<<endl<<str<<endl;
    func();
    return 0;
}
int func(){
    ofstream outfile;
    outfile.open("Sample2.txt");
    outfile<<"Here Mark my words There Will be a Time \n";
    outfile<<"U will need me , but i wont be there\n";
    outfile.close();
    const int MAX=100;
    char str[MAX];
    ifstream infile("Sample2.txt");
    while(!infile.eof()){
        infile.getline(str,MAX);
        cout<<endl<<str;
    }
    return 0;
}