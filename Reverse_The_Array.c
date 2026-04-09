#include<stdio.h>
//OUTPUT:8,5,4,12,10

int fun(int arr[],int size){
    int x;
    printf("Reverse  Value of array :");
    for(int i=size;i>=0;i--){
        x=arr[i];
        printf("%d\t",x);
    }
    return x;
}
int main(){
    int arr[]={10,12,4,5,8,},size=4;
    fun(arr,size);
    return 0;
}