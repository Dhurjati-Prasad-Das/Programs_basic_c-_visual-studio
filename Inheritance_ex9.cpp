#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base class\n";
    }
};
class derived:public base{
    public:
     derived():base(){
        cout<<"Derived class\n";
    }
};
int main(){
    derived d1;
    return 0;
}