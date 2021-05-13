//Program to maintain Link Lists
#include<iostream>
using namespace std;
class linklist{
       private:
       struct node{
           int data;
           node* link;
       }*p;
       public:
       linklist();
       void append(int num);
       void addatbeg(int num);
       void addafter(int c,int num);
       void del(int num);
       void display();
       int count();
       ~linklist();
};
linklist::linklist(){
    p=NULL;
}
void linklist::append(int num){
    node *q,*t;
    if(p==NULL){
        //create first node
        p=new node;
        p->data=num;
        p->link=NULL;
    }
    else{
        q=new node;
        q->data=num;
        q->link=NULL;
        t=p;
        while(t->link!=NULL){
            t=t->link;
        }
        t->link=q;
    }
}
void linklist::addatbeg(int num){
    node *q;
    q=new node;
    q->data=num;
    q->link=p;
    p=q;
}
void linklist::addafter(int c , int num){
    node *q,*t;int i;
    for(i=0,q=p;i<c;i++){
        q=q->link;
        if(q==NULL){
            cout<<endl<<"There are less than "<<c<<" elements";
            return;
        }
    }
    t=new node;
    t->data=num;
    t->link=q->link;
    q->link=t;
}
void linklist::del(int num){
    node *q,*r;
    q=p;
    if(q->data==num){
        p=q->link;
        delete q;
        return;
    }
    r=q;
    while(q!=NULL){
        if(q->data==num){
            r->link=q->link;
            delete q;
            return;
        }
        r=q;
        q=q->link;
    }
    cout<<endl<<"Element"<<num<<" not found\n"; 
}
void linklist::display(){
    node *q;int i=1;
    q=p;
    while(q){
        cout<<"The "<<i++<<" element is " <<q->data<<endl;
        q=q->link;
    }
}
int linklist::count(){
    node *q;int i=0;
    q=p;
    while(q){
        i++;
        q=q->link;
    }
    return i;
}
linklist::~linklist(){
    node *q;
    if(p==NULL){
        return;
    }
    while(p!=NULL){
        q=p->link;
        delete p;
        p=q;
    }
}
int main(){
    linklist ll;
    cout<<endl<<"Number of elements in Linked List = "<<ll.count()<<endl;
    ll.append(11);
    ll.append(22);
    ll.append(33);
    ll.append(44);
    ll.append(55);
    ll.append(66);
    ll.addatbeg(100);
    ll.addatbeg(200);
    ll.addatbeg(300);
    ll.addafter(3,333);
    ll.addafter(6,444);
    ll.display();
    cout<<endl<<"Number of elements in Linked List = "<<ll.count();
    ll.del(300);
    ll.del(66);
    ll.del(0);
    ll.display();
    cout<<endl<<"Number of elements in Linked List = "<<ll.count();
    return 0;
}
