#include<iostream>
using namespace std;
int top=3;
class base{
    protected:
    int top;
    public:
    base(){
        top=2;
        cout<<endl<<"In BASE="<<top;
    }
};
class derived:public base{
    private:
    int top;
    public:
    derived():base(){
        top=1;
        cout<<endl<<"In DERIVED="<<top;
        cout<<endl<<"In DERIVED="<<base::top;
        cout<<endl<<"In DERIVED="<<::top;
    }
};

int main(){
    derived d1;
    return 0;
}