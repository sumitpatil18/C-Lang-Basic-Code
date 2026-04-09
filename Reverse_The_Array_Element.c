#include<stdio.h>
// output:50,40,30,20,10

void fun(int arr[],int n){
    int firstval,secondval;
    for(int i=0;i<=n/2;i++){
        firstval=arr[i];             //10,20v alue in firstvaal
        secondval=arr[n-i-1];        //50,40, value in socondval
        arr[i]=secondval;            // 50, 40 value in arr[i]
        arr[n-i-1]=firstval;         //10,20 value in arr[n-i-1]
    }
}
void display(int arr[],int n){
    for (int i=0;i<=4; i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[]={10,20,30,40,50};
    fun(arr,5);
    display(arr,5);
    return 0;
}