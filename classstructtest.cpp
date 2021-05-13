#include<string>
#include<iostream>
using namespace std;
class address{
    private:
    char name[10];
    char city[10];
    public:
    address(char *p,char *q){
        //return 1;
        strcpy(name,p);
        strcpy(city,q);
    }
};
class date{
    private:
    int day,month,year;
    date(){
        day=7;month=9;year=1996;
    }
};
class triplets{
    private :
    int t1,t2,t3;
    public:
    triplets(int x,int y, int z){
        t1=x;t2=y;t3=z;
    }
    void display(){
        cout<<endl<<t1<<t2<<t3;
    }
};
class list{
    private:
    class node{
        public:
        int data;
        node *link;
    }*p;
    public:
    void create(){
        p=new node;
        p->data=10;
        p->data=10;
    }
};
int main(){
    address my("mac","london");
    printf("\ns\n");
    // date today;
    triplets r(2,3,4),s(0,0,0);;
    r.display();
    s.display();
    list l1;
    l1.create();
    return 0;
}