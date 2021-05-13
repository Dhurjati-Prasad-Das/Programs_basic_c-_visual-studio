#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;
void memwarning();
void * operator new(size_t,int);
void operator delete(void *);
int main(){
    set_new_handler(memwarning);
    char *p=new('$') char[100];
    //char *p=new char[100];
    cout<<endl<<"First Allocation : p ="<<hex<<long(p)<<endl;
    for(int i=0;i<100;i++){
        cout<<p[i];
    }
    cout<<endl;
    delete p;
    p=new('$') char[64000u];
    delete p;
    return 0;
}
void memwarning(){
    cout<<endl<<"Free store has gone empty";
    exit(1);
}
void * operator new (size_t sz, int setvalue)
{
    void *p;
    p=malloc(sz);
    if(p==NULL){
        memwarning();
    }
    memset(p,setvalue,sz);
    return (p);
}
void operator delete(void * pp){
    free(pp);
}