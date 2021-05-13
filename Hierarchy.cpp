#include<iostream>
#include<string.h>
using namespace std;
class School{
    public:
    string name;
    void SchoolName(){
        cout<<"School name = " <<this->name<<endl;
    }
};
class Student :public School{
    public:
    string nameStudent;
     void StudentName(){
        cout<<"Student name ="<<this->nameStudent<<endl;
    }
};
class Teacher :public School{
    public:
    string nameTeacher;
     void TeacherName(){
        cout<<"Teachers Name = " <<this->nameTeacher<<endl;
    }
};

        int  main(){
        cout<<"Entry in main"<<endl;
        School S1;
        S1.name="Tagore Academy";
        Student S2;
        S2.nameStudent="Dhurjati Prasad Das";
        Teacher S3;
        S3.nameTeacher="Ganesh gaitonde";
        S1.SchoolName();
        S2.StudentName();
        S3.TeacherName();
        S3.name=S1.name;
        S3.SchoolName();
        cout<<"Address of school = "<<&S1<<endl;
        cout<<"Address of student = "<<&S2<<endl;
        cout<<"Address of teacher = "<<&S3<<endl;

        return 0;
        }