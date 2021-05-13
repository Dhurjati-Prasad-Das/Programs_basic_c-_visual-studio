#include<iostream>
using namespace std;
class complex{
    private:
    double real,imag;
    public:
    complex(){
        real=imag=0;
    }
    complex(double r, double i){
        real=r;
        imag=i;
    }
    friend ostream& operator<<(ostream& o,complex& c);
    friend istream& operator>>(istream &o,complex &c);
};
ostream& operator<<(ostream& o,complex& c){
    o<<"("<<c.real<<","<<c.imag<<"i)";
    return o;
}
istream& operator>>(istream& o,complex& c){
    o>>c.real>>c.imag;
    return o;
}
int main(){
    complex c1(1.5,2.5),c2(3.5,4.5),c3;
    cout<<endl<<"c1="<<c1<<endl<<"c2="<<c2;
    cout<<endl<<"Enter a complex number";
    cin>>c3;
    cout<<"c3="<<c3<<endl;
    return 0;
}