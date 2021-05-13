#include<iostream>
using namespace std;
class example{
    private:
    int data;
    static int count;
    public:
    example();
    void display() const;
};
int example::count=10;
example::example(){
    data=0;
}
void example::display() const{
    cout<<endl<<"count="<<data<<count;
}
int main(){
    example d;
    d.display();
    return 0;
}