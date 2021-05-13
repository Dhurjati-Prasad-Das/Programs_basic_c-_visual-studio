#include<iostream>
using namespace std;
class index1{
    protected:
    int count;
    public:
    index1(){
      count =0;
    }
    void operator ++(){
        count=count+200;
    }
    void operator ++(int){
        count=count+100;
    }
    void display(){
        cout<<endl<<count;
    }
};
int main(){
    index1 c;
    c++;
    c.display();
    ++c;
    c.display();
    cout<<endl;
    return 0;
}