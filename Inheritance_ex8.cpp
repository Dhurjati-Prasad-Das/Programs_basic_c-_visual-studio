#include<iostream>
using namespace std;
class base{
    private:
    int i;
    protected:
    int k;
    public:
    float j;
    base(){
        i=j=k=99;
    }
};
class derived:public base{
    public:
    derived():base(){
        cout<<k<<"\t"<<j<<"\n";
    }
};
int main(){
    derived d1;
    return 0;
}