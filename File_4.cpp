#include<iostream>
using namespace std;
int main(){
    char ch;
    char str1[]="BE silent.let performance speak";
    cout<<endl<<"Enter a character:";
    cin.get(ch);
    cout<<ch;
    cin.putback(ch);
    cin.get(ch);
    cout<<endl<<ch;
    int count=cin.gcount();
    cout<<endl<<"Characters extracted in the last get():"<<count;
    cin.putback('Z');
    ch=cin.peek();
    cout<<endl<<ch;
    cin.get(ch);
    cout<<endl<<ch<<endl;
    cout<<str1<<endl<<(void*)str1<<endl;
    return 0;

}