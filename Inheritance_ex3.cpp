#include<iostream>
using namespace std;
class base {
    protected:
    int i;
    public:
    void funct(){
        cout<<"\nIn base ="<<&i;
    }
};
class derived:public base{
    private: 
    int i;
    public :
    derived(){
        cout<<"\nIn derived="<<&i;
        funct();
    }
};
int main(){
    derived d1;
    return 0;
}