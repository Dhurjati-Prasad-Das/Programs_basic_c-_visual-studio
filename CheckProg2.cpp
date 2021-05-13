#include<iostream>
using namespace std;
void f(int x= 10 , int y= 20 , int z= 30);
void f(int);
int main(){
    f(1);
    return 0;
}
void f(int x,int y,int z){
    cout<<endl<<x<<y<<z;
}
void f(int x ){
    cout<<endl<<x;
}