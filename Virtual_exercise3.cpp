#include<iostream>
using namespace std;

class base{
    protected:
    int data;
  
};
class derived1:virtual public base{
    protected:
    int data1;
    
};
class derived2:virtual public base{
    protected:
    int data2;
    
};
class derived3:public derived1,public derived2{
    private:
    int data3;
};
int main(){
    base b;
    derived1 d1;
    derived2 d2;
    derived3 d3;
    cout<<endl<<sizeof(b)<<endl<<sizeof(d1)<<endl<<sizeof(d2)<<endl<<sizeof(d3);
    cout<<endl<<endl;
    return 0;
}