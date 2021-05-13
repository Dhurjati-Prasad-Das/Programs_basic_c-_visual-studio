#include<iostream>
#include<string>
using namespace std;
class carburettor{
    private:
    char type;
    float cost;
    char mfr[30];
    public:
    void setdata(char t,float c,char *m){
        type=t;
        cost=c;
        strcpy(mfr,m);
    }
    void displaydata(){
        cout<<endl<<type<<"\t"<<cost<<"\t"<<mfr<<"\n";
    }
};
class car{
    private:
    char model[25];
    char drivetype[20];
    public:
    void setdata(char* m,char* d){
        strcpy(model,m);
        strcpy(drivetype,d);
    }
    void displaydata(){
        cout<<endl<<model<<"\t"<<drivetype<<"\n";
    }
    carburettor c;
};
int main(){
    car mycar;
    mycar.c.setdata('A',8500.00,"Mico");
    mycar.setdata("Sports","Four wheeler");
    mycar.c.displaydata();
    mycar.displaydata();
    return 0;
}