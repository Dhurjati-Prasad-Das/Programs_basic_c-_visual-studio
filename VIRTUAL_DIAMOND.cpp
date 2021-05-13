#include<iostream>
using namespace std;

class base{
    protected:
    int i;
    public:
    base(){
        i=500;
    }
    void fun(){
        cout<<"In fun of the base class\n ";
    }
};
class derived1:virtual public base{
    
};
class derived2:virtual public base{
    
};
class derived3:public derived1,public derived2{
      public:
      void display(){
          cout<<i<<"\n";
      }
};
int main(){
    derived3 ch;
    ch.display();
    ch.fun();

    
    return 0;
}