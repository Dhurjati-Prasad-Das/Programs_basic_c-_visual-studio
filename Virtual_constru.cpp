#include<iostream>
using namespace std;

class base{
      public:
      base(){
          cout<<"\n Base class Constructor\n";
      }
      //IMP to add virtual so that desctuctor of derived class are called
      // if object created by new is assigned to base ptr
      virtual ~base(){
          cout<<"\n Base Class Destructor\n";
      }
};
class derived:public base{
      public:
      derived(){
          cout<<"\n Derived class Constructor\n";
      }
      ~derived(){
          cout<<"\n Derived Class Destructor\n";
      }
};
int main(){
    base *b;
    b=new derived;
    delete b;
    return 0;
}