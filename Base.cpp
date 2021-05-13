#include<iostream>
#include<string.h>
using namespace std;
class Base{
    protected:
     int id;
    public:
    virtual void whogetsinvoked(){
        cout<<"In BASE " <<"\n";
    }
};
class Derived : public Base{
      public:
      void whogetsinvoked(){
           cout<<"In Derived"<<"\n";
       }
};
class Derived1 : public Derived{
      public:
        void whogetsinvoked(){
       cout<<"In Derived1"<<"\n";
       id=2;
       }
};
int main(){
    Base *test= new Derived1();
    test->whogetsinvoked();
    return 0;
}