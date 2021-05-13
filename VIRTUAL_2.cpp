#include<iostream>
using namespace std;

class base{
    public:
    virtual void fun1(){
       cout<<"\n In the BASE class ::FUN1\n";
    }
};
class derived:public base{
    public:
    void fun1(){
        cout<<"\n In the  DERIVED class::FUN1\n";
    }
    virtual void fun2(){
        cout<<"\n In the  DERIVED class::FUN22222\n";
    }
};
int main(){
    base  *ptr1,*ptr2;
    base b;
    derived d;
    ptr1=&b;
    ptr2=&d;
    ptr1->fun1();
    ptr2->fun1();
    ((derived*)ptr2)->fun2();
    return 0;
}