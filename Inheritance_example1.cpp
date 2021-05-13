#include<iostream>
#include<string>
using namespace std;
void strnset(char* a,int default_value,int size);
class item{
    private:
    char title[20];
    float price;
    public:
    item(){
        strnset(title,0,20);
        price=0;
    }
    item(char *t,float p){
        strcpy(title,t);
        price=p;
    }
    void getdata(){
        cout<<"\n Enter the Title and price\n";
        cin>>title>>price;
    }
    void displaydata(){
        cout<<"\nTitle \t and \t Price\n";
        cout<<title<<"\t "<<price<<"\n";
    }
};
class sales{
    private:
    float salesfig[3];
    public:
    sales(){
        for(int i=0;i<3;i++)
           salesfig[i]=0;
    }
    sales(float a,float b ,float c){
        salesfig[0]=a;
        salesfig[1]=b;
        salesfig[2]=c;
    }
    void getdata(){
        cout<<"\nEnter sale figures for 3 month\n ";
        for(int i=0;i<3;i++){
            cin>>salesfig[i];
        }
    }
    void displaydata(){
        cout<<endl<<"\nSales figure for 3 months\n";
        for(int i=0;i<3;i++){
            cout<<salesfig[i]<<"\t";
        }
    }    
};
class hwitem:private item,private sales{
    private:
     char category[10];
     char oem[10];
     public:
     hwitem():item(),sales(){
         strnset(category,0,10);
         strnset(oem,0,10);
     }
     hwitem(float a,float b, float c,char *t,float p,char *cat,char *o):item(t,p),sales(a,b,c){
        strcpy(category,cat);
        strcpy(oem,o); 
     }
     void getdata(){
         item::getdata();
         cout<<endl<<"\nEnter the category and oem \n";
         cin>>category>>oem;
         sales:getdata();
     }
     void displaydata(){
         item::displaydata();
         cout<<endl<<"\nThe category and oem \n";
         cout<<category<<"\t"<<oem;
         sales::displaydata();

     }
};
int main(){
    hwitem h1;
    hwitem h2(50000.0,1250000.0,175000.0,"IBM PC/At",25000,"FG","BM");
    h1.displaydata();
    h2.displaydata();
    return 0;
}
void strnset(char* a,int default_value,int size){
    for(int i=0;i<size;i++){
        a[i]=default_value;
    }
    a[size-1]=NULL;
}