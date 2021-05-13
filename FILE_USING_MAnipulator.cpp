#include<iostream>
using namespace std;
ostream &tab(ostream &o){
    return o<<'\t';
}
int main(){
    cout<<"DON't ";
    cout<<tab<<tab;
    cout<<"PANic"<<endl;
    return 0;
}