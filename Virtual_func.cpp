#include<iostream>
using namespace std;

class one{
    public:
    virtual void display(){
       cout<<"\n In the BASE class \n";
    }
    //virtual void display()=0;
};
class oneofone:public one{
    public:
    void display(){
        cout<<"\n In the ONEOFONE DERIVED class\n";
    }
};
class twoofone:public one{
    public:
    void display(){
        cout<<"\n In the TWOOFONE DERIVED class\n";
    }
};
int main(){
    one* ptr;
    //one o3;
    oneofone o1;
    twoofone o2;
    ptr=&o1;
    ptr->display();
    ptr=&o2;
    ptr->display();
    return 0;
}