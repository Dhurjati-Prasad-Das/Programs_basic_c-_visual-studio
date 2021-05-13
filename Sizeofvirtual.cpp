#include<iostream>
using namespace std;

class sample{
    private:
    int i;
    public:
    virtual void display(){
       cout<<"\n In the SAMPLE class \n";
    }
    //virtual void display()=0;
};
class example{
    private:
    int i;
    public:
    void display(){
        cout<<"\n In the EXAMPLE  class\n";
    }
};
class trial{
    public:
    void display(){
        cout<<"\n In the  TRIAL class\n";
    }
};
int main(){
    sample s;
    example e;
    trial t;
    cout<<"\n"<<sizeof(s)<<"\t"<<sizeof(e)<<"\t"<<sizeof(t)<<"\n";
    return 0;
}