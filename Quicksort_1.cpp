#include<iostream>
using namespace std;
int count1=0;
int count2=0;
int count3=0;
int partition(int *,int,int);
void quicksort(int *,int,int);
int partition(int *arr,int low,int high){
    count2++;
    int pivot=arr[high];
    int i,t;
    int left=-1;
    for(i=low;i<high;i++){
             if(arr[i]<arr[high]){
                 left++;
                 t=arr[i];
                 arr[i]=arr[low+left];
                 arr[low+left]=t;
             }       
    }
    left++;
    t=arr[high];
    arr[high]=arr[low+left];
    arr[low+left]=t;
    return (low+left);
}
void quicksort(int *arr,int left,int right){
    count1++;
    if(left<right){
        count3++;
        int k=partition(arr,left,right);
        quicksort(arr,left,k-1);
        quicksort(arr,k+1,right);
    }
}
int main(){
    int arr[7]={0,1,3,2,45,22,192};
    quicksort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\n"<<count1<<"\t "<<count2<<"\t"<<count3<<"\n";
    return 0;
}