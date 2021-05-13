#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
class user{
    private:
    int i;
    float f;
    char c;
    public:
    void displaydata(){
        cout<<endl<<i<<'\n'<<f<<'\n'<<c;
    }
};
class date{
    private:
    int dd,mm,yy;
    public:
    date(){
        cout<<endl<<"Reached here";
    }
};
class student_rec{
    private:
    int m1,m2,m3;
    float percentage;
    public:
    student_rec(){
        m1=m2=m3=0;
        percentage=0.0;
    }
    void calc_perc(int x,int y, int z){
        m1=x;m2=y;m3=z;
        percentage=(m1+m2+m3)/3.0;
        display_perc();
    }
    void display_perc(){
        cout<<endl<<"percentage= "<<percentage<<"%";
    }
};
class control{
    public:
    control(){
        calculate();
        cout<<endl<<"Constructor";
    }
    void calculate(){
        display();
        cout<<endl<<"Calculator";
    }
    void display(){
        cout<<endl<<"Displayed";
    }
};
int main(){
    cout<<sizeof(user);
    user u1;
    cout<<endl<<sizeof(u1);
    u1.displaydata();
    //////////
    date today;
    date *p=&today;
    cout<<endl<<p;
    //////
    student_rec s1;
    s1.display_perc();
    s1.calc_perc(35,36,37);
    s1.display_perc();
    ////////////
    control c1;
    return 0;
}