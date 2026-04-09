#include<stdio.h>
void fun(int arr[],int n){
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest number is:%d",arr[0]);
}
int main(){
    int arr[]={141,54,754,1,884,182,14};
    fun(arr,7);
    return 0;
}