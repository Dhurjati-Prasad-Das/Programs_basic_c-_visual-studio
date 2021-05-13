#include<iostream>
using namespace std;
class base{
    public:
    virtual void fun(){
        cout<<endl<<"In BASE::fun\n";
    }
};
class derived1:virtual public base{
    public:
    void fun(){
        
        cout<<endl<<"In DERIVED 1::fun\n";
    }
};
class derived2:virtual public base{
    public:
    void fun(){
        
        cout<<endl<<"In DERIVED 222::fun\n";
    }
};
class derived3:public derived1,public derived2{
       public:
       void fun(){
           cout<<"\n In DERIVED 333::fun()";
           derived1::fun(); 
       }
};
int main(){
base *b;
derived1 d1;
b=&d1;
b->fun();
derived2 d2;
b=&d2;
b->fun();

derived3 d3;
b=&d3;
b->fun();
return 0;
}