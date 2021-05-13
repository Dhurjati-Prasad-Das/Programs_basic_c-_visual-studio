#include<iostream>
using namespace std;
int main(){
    int total_time =60,i,j,count=0,number,skip=7;
    float result=0.0f;
    char marks_iisc[100000];
    for(i=0;i<total_time;i++){
        for(j=i-15;j<i+15;j++){
            if((j>0)&&(j<total_time)){
                count=count+1;
            }
        }
    }
    result=(float)count/3600;
    cout<<endl<<count<<endl<<result<<endl<<(float)7/16<<endl;
    cin>>marks_iisc;
    cin>>marks_iisc;
    count=0;
    i=0;
    while(marks_iisc[i]){
        //cout<<number<<"\t";
        if(marks_iisc[i]=='2'){
            i=i+7;
            count++;
        }
        i=i+1;
        
    }
    cout<<endl;
    cout<<count<<endl;
    return 0;
}