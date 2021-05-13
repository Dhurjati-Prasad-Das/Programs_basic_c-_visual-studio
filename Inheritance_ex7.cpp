#include<iostream>
using namespace std;
void print();
class base1{
    protected:
    void print(){
        cout<<"\nHello";
    }
};
class base2{
    public:
    void print(){
        cout<<"\nHi";
        ::print();
    }
};
void print(){
    cout<<"\nERR\n";
}
int main(){
    base1 b1;
    base2 b2;
    //b1.print();
    b2.print();
    return 0;
}