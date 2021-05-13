#include<iostream>
using namespace std;
class base{
    public:
    virtual void fun1(){
        cout<<endl<<"In BASE::fun1\n";
    }
};
class derived1:public base{
    public:
    void fun1(){
        
        cout<<endl<<"In DERIVED 1::fun1\n";
    }
    virtual void fun2(){
        cout<<endl<<"In DERIVED 1::fun2\n";
    }
};
class derived2:public derived1{
    public:
    void fun1(){
        
        cout<<endl<<"In DERIVED 222::fun1\n";
    }
    void fun2(){
        cout<<endl<<"In DERIVED 222::fun2\n";
    }
};
int main(){
base *ptr1;
derived1 *ptr2;
base b;
derived2 d;

ptr1=&b;
ptr2=&d;
ptr1->fun1();
ptr2->fun1();
((derived1*) ptr2)->fun2();
return 0;
}