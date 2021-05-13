#include<iostream>
using namespace std;
class base{
    protected:
    int i;
    public:
    base(){
        cout<<endl<<"In BASE="<<&i;
    }
};
class derived:public base{
    public:
    derived():base(){
        cout<<endl<<"In DERIVED="<<&i;
    }
};
int main(){
    derived d1;
    base b1;
    return 0;
}