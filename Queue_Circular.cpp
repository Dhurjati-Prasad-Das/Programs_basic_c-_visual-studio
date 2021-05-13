//Circular Queue Implementation
#include<iostream>
using namespace std;

#define MAX 10
class Queue {
    private:
    int arr[MAX];
    int front,rear;
    public:
    Queue(){
        rear=-1;
        front=-1;
    }
    void addq(int item){
        if((front==rear+1)||(rear==MAX-1 && front ==0)){
            cout<<endl<<"Queue is FULL";
            return;
        }
        if(rear==MAX-1){
            rear=0;
            }
        else{
            rear=rear+1;
        }    
        arr[rear]=item;
        if(front==-1){
            front=0;
        }
    }
    int delq(){
        if((front==-1)&&(rear==-1)){
            cout<<endl<<"Queue is EMPTY";
            return NULL;
        }
        else{
            int data=arr[front];
            if(front==rear){
                front=rear=-1;
            }
            else{
                if(front==MAX-1){
                    front=0;
                }
                else
                front=front+1;
            }
            return data;
        }
    }
};
int main(){
    Queue s;
    s.addq(11);
    s.addq(12);
    s.addq(13);
    s.addq(14);
    s.addq(15);
    s.addq(16);
    s.addq(17);
    s.addq(18);
    s.addq(19);
    s.addq(20);
    //s.addq(21);
    int i=s.delq();
    cout<<endl<<"Item deleted="<<i;
    i=s.delq();
    cout<<endl<<"Item deleted="<<i;
    i=s.delq();
    cout<<endl<<"Item deleted="<<i;
    i=s.delq();
    cout<<endl<<"Item deleted="<<i<<endl;
}