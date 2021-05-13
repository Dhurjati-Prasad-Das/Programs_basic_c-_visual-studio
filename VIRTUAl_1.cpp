#include<iostream>
using namespace std;

class vehicle{
    public:
    virtual void speed(){
       cout<<"\n In the SPEED of VEHICLE \n";
    }
    virtual void maintenance(){
       cout<<"\n In the MAINTENANCE of VEHICLE \n";
    }
    void value(){
       cout<<"\nIn the VALUE of VEHICLE \n";
    }
};
class fourwheeler:public vehicle{
    public:
    void speed(){
       cout<<"\n In the SPEED of FOURWHEELER \n";
    }
    void maintenance(){
       cout<<"\n In the MAINTENANCE of FOURWHEELER \n";
    }
};
class twowheeler:public vehicle{
    public:
    void speed(){
       cout<<"\n In the SPEED of TWOWHEELER \n";
    }
    void maintenance(){
       cout<<"\n In the MAINTENANCE of TWOWHEELER \n";
    }
    void value(){
       cout<<"\nIn the VALUE of TWOWHEELER \n";
    }
};
class airborne:public vehicle{
    public:
    void speed(){
        cout<<"\n In the SPEED of AIRBORNE \n";
    }
};
int main(){
    vehicle *ptr1;
    vehicle v;
    ptr1=&v;
    ptr1->speed();
    ptr1->maintenance();
    ptr1->value();
    vehicle *ptr2,*ptr3,*ptr4;
    fourwheeler maruti;
    twowheeler bajaj;
    airborne jumbo;
    ptr2=&maruti;
    ptr3=&bajaj;
    ptr4=&jumbo;
    ptr2->speed();
    ptr2->maintenance();
    ptr3->speed();
    ptr3->maintenance();
    ptr4->speed();
    ptr4->maintenance();

    ptr2->value();
    ptr3->value();
    vehicle w;
    w.speed();
    fourwheeler f;
    f.speed();
    airborne a;
    a.maintenance();
    return 0;
}