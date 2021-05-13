#include<iostream>
#include<cstdlib>
#include<string>
#include<new>
using namespace std;

const int MAX=5;
const int FREE=0;
const int OCCUPIED=1;
void memwarning();

void memwarning(){
    cout<<endl<<"Free store has now gone empty";
    exit(1);
}
class employee{
    private:
    char name[20];
    int age;
    double salary;
    public:
    void * operator new(size_t bytes);
    void operator delete(void *p);
    void setdata(char *n,int a, float s);
    void showdata();
    employee();
    ~employee();
};
struct pool{
    employee obj;
    int status;
};
struct pool *p=NULL;
int flag =0;
void * employee::operator new(size_t sz){
    //cout<<endl<<"Reached new operator";
    int i;
    if(flag==0){
        p=(pool *)malloc(sz*MAX);
        if(p==NULL)
             memwarning();
        for(i=0;i<MAX;i++){
            p[i].status=FREE;
        }
        flag=1;
        p[0].status=OCCUPIED;
        return &p[0].obj;     
    }
    else{
        for(i=0;i<MAX;i++){
            if(p[i].status==FREE){
                p[i].status=OCCUPIED;
                //cout<<i<<endl;
                return &p[i].obj;
            }
        }
        memwarning();
    }
}
employee::employee(){
    //cout<<endl<<"Reached constructor";
}
void employee::operator delete(void *q){
    //cout<<endl<<"Reached delete";
    if(q==NULL){
        return;
    }
    for(int i=0;i<MAX;i++){
        if(q==&p[i].obj){
        p[i].status=FREE;
        strcpy(p[i].obj.name,"");
        p[i].obj.age=0;
        p[i].obj.salary=0.0;
        }
    }
}
void employee::setdata(char *n,int a,float s){
    strcpy(name,n);
    age=a;
    salary=s;
}
void employee::showdata(){
    cout<<endl<<name<<'\t'<<age<<'\t'<<salary;
}
employee::~employee(){
    cout<<"reached Destructor"<<endl;
}
int main(){
    set_new_handler(memwarning);
    employee *e1,*e2,*e3,*e4,*e5,*e6;
    e1=new employee;
    e1->setdata("ajay",23,45100.05);
    e2=new employee;
    e2->setdata("bijay",33,45200.05);
    e3=new employee;
    e3->setdata("sanjay",33,45300.05);
    e4=new employee;
    e4->setdata("majekar",43,45400.05);
    e5=new employee;
    e5->setdata("zakir",53,45500.05);
    e1->showdata();
    e2->showdata();
    e3->showdata();
    e4->showdata();
    e5->showdata();
    delete e4;
    delete e5;
    e4->showdata();
    e5->showdata();
    e4=new employee;
    e5=new employee;
    //e6=new employee;
    cout<<endl<<"Done";
    return 0;


}