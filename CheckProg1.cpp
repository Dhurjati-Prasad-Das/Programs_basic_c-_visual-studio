#include<iostream>
using namespace std;
int main(){
    char *p="hello";
    char *q=p;
    cout<<p<<endl<<q<<endl;
    q="Goodbye";
    cout<<p<<endl<<q<<endl;
    int i=5;
    int &j=i;
    int &k=j;
    int &l=i;
    cout<<endl<<i<<j<<k<<l<<endl;
    cout<<sizeof(i)<<endl<<sizeof('i')<<endl;
    return 0;
}