//Implemtation of stack
#include<iostream>
using namespace std;
#define MAX 10
class stack{
    private:
    int arr[MAX];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(int item){
        if(top==MAX-1){
            cout<<endl<<"Stack is FULL";
        }
        top++;
        arr[top]=item;

    }
    int pop(){
        if(top==-1){
            cout<<endl<<"Stack is EMPTY";
            return NULL;
        }
        int data=arr[top];
        top--;
        return data;
    }
    int* address(){
        return arr;
    }
};
int main(){
    stack s;
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
    //Just to check the value after the popping elements
    int *k=s.address();
    for(int j=0;j<12;j++){
        cout<<*(k+j)<<endl;
    }

    return 0;

    
}