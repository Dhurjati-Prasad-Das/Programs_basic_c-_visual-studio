#include<iostream>
using namespace std;

struct node{
        int data;
        node* link;
    }; 

class stackll{
    private:
    node* top;
    public:
    stackll();
    void push(int item);
    int pop();
    ~stackll();
};
stackll::stackll(){
    top=NULL;
}
void stackll::push(int item){
    node* t=new node;
    t->data=item;
    t->link=top;
    top=t;
}
int stackll::pop(){
    if(top==NULL){
        cout<<"\n There are no elements to pop from stack \n";
        return NULL;
    }
    int item;
    node *t=top;
    top=top->link;
    item=t->data;
    delete t;
    return item;
}
stackll::~stackll(){
    node *t=top;
    while(top){
        top=top->link;
        delete t;
        t=top;
    }
}
int main(){
    stackll s;
    s.push(11);
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.push(17);
    s.push(18);
    s.push(19);
    s.push(20);
    //s.push(21);
    int i=s.pop();
    cout<<endl<<"Item popped="<<i;
    i=s.pop();
    cout<<endl<<"Item popped="<<i;
    i=s.pop();
    cout<<endl<<"Item popped="<<i;
    i=s.pop();
    cout<<endl<<"Item popped="<<i<<endl;
}