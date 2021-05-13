#include<iostream>
#include<string.h>
using namespace std;
class Employee{
public:    
    int Employee_id;
    string Employee_name;
    int Get_Employee_id(){
        return Employee_id;
    }
    string Get_Employee_name(){
        return Employee_name;
    }
};
int main(){
    Employee obj1;
    obj1.Employee_id=20020299;
    obj1.Employee_name="Dhurjati Prasad Das";
    cout<<obj1.Get_Employee_id()<<"\t";
    cout<<obj1.Get_Employee_name();
    return 0;
}
