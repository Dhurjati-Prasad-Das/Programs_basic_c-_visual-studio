#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<endl<<"In BASE=1";
    }
    ~base(){
        cout<<endl<<"In BASE=1";
    }
};
class derived1:public base{
    public:
    derived1():base(){
        cout<<endl<<"In DERIVED=1";
    }
    ~derived1(){
        cout<<endl<<"In DERIVED=1";
    }
};
class derived2:public derived1{
    public:
    derived2():derived1(){
        cout<<endl<<"In DERIVED=2";
    }
    ~derived2(){
        cout<<endl<<"In DERIVED=2";
    }
};
int main(){
    derived2 d1;
    cout<<endl;
    return 0;
}