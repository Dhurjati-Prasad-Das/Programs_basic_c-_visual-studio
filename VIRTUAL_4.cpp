#include<iostream>
using namespace std;

class base{
    private:
    int i;
    public:
    base(int ii){
        i=ii;
    }
    virtual void fun1(){
       cout<<"\n In the BASE class ::FUN1\n";
       cout<<i<<"\n";
    }
};
class derived:public base{
    private:
    int j;
    public:
    derived(int ii,int jj):base(ii){
        base *p;
        p=this;
        p->fun1();
        j=jj;
    }
    void fun1(){
        cout<<"\n In the  DERIVED class::FUN1\n";
        cout<<j<<"\n";
    }
};
int main(){
    //base *ptr1,*ptr2;
    base  b(10);
    derived d(15,20);
    /*ptr1=&b;
    ptr1->fun1();
    ptr2=&d;
    ptr2->fun1();
    base &ref2=d;
    ref2.fun1();
    b=d; //OBJECT SLICED
    b.fun1();*/
    return 0;
}