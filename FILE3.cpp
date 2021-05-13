#include<iostream>
#include<iomanip>
//#include<windows.h>
using namespace std;
int main(){
    int i=53;
    float a=425.0;
    float b=123.500328;
    char str[]="Dream.Then Make it happen.";
    //cout.setf(ios::unitbuf);
    //cout.setf(ios::showpos);
    cout<<setiosflags(ios::unitbuf|ios::showpos);
    cout<<i<<endl;
    //cout.setf(ios::showbase);
    //cout.setf(ios::uppercase);
    cout<<setiosflags(ios::showbase|ios::uppercase);
    //cout.setf(ios::hex,ios::basefield);
    cout<<hex<<i<<endl;
    //cout.setf(ios::oct,ios::basefield);
    cout<<oct<<i<<endl;
    //cout.fill('0');
    cout<<setfill('0');
    cout<<"FILL CHARACTER="<<cout.fill()<<endl;
    //cout.setf(ios::dec,ios::basefield);
    //cout.width(10);
    cout<<dec<<setw(10)<<i<<endl;
    //cout.setf(ios::left,ios::adjustfield);
    //cout.width(10);
    cout<<setiosflags(ios::left)<<dec<<setw(10)<<i<<endl;
    //cout.setf(ios::internal,ios::adjustfield);
    //cout.width(10);
    cout<<i<<endl;
    cout<<setiosflags(ios::internal)<<dec<<setw(10)<<i<<endl;
    //cout.width(10);
    cout<<setw(10)<<str<<endl;
    //cout.width(40);
    cout<<setw(40)<<str<<endl;
    //cout.setf(ios::left,ios::adjustfield);
    //cout.width(40);
    cout<<setiosflags(ios::left)<<setw(40)<<str<<endl;
    cout.precision(6);
    cout<<"Precision:"<<cout.precision();
    //cout.setf(ios::showpoint);
    //cout.unsetf(ios::showpos);
    cout<<endl<<setiosflags(ios::showpoint)<<resetiosflags(ios::showpos)<<a;
    //cout.unsetf(ios::showpoint);
    cout<<endl<<resetiosflags(ios::showpoint)<<a;
    //cout.setf(ios::fixed,ios::floatfield);
    cout<<setiosflags(ios::fixed)<<endl<<b;
    //cout.setf(ios::scientific,ios::floatfield);
    cout<<setiosflags(ios::scientific)<<endl<<b;
    b=5.375;
    cout.precision(14);
    //cout.setf(ios::fixed,ios::floatfield);
    cout<<setiosflags(ios::fixed)<<endl<<b;
    //cout.setf(ios::scientific,ios::floatfield);
    cout<<setiosflags(ios::scientific)<<endl<<b;
    //cout.unsetf(ios::showpoint);
    //cout.unsetf(ios::unitbuf);
    cout<<resetiosflags(ios::showpoint|ios::unitbuf)<<endl;
    return 0;



}