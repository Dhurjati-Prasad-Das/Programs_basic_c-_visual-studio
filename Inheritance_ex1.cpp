#include<iostream>
using namespace std;
class base{
    private:
    int i;
};
class derived:public base{
    private:
    int j;
};
class base1{
    private:
    int b1;
};
class base2{
    private:
    int b2;
};
class derived1:public base1,public base2{
    private:
    int d1;
};
int main(){
    cout<<endl<<sizeof(derived)<<"\t"<<sizeof(base);
    derived o1;
    base o2;
    cout<<endl<<sizeof(o1)<<"\t"<<sizeof(o2);
    cout<<endl<<sizeof(derived1)<<"\t"<<sizeof(base2)<<"\t"<<sizeof(base1)<<"\n";
    return 0;
}