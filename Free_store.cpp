#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;

void memwarning();

int main(){
    set_new_handler(memwarning);

    char *p=new char[100];
    cout<<endl<<"First allocation:p = "<<hex<<long(p);
    delete []p;
    p= new char[0x7FFFFFFF];
    delete []p;
    cout<<endl<<"Second allocation:p = "<<hex<<long(p);
    set_new_handler(0);
    return 0;
}
void memwarning(){
    cout<<endl<<"Free store has now gone empty"<<endl;
    exit(1);
}