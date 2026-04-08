#include<stdio.h>
void fun(int arr,int n){
    for(int i=0;i<n;i++){
        printf("Element Of Array is :%d",arr);
    }
}
int main(){
    int arr[]={11,12,13,14,15,166};
    int n=6;
    fun(arr,n);
    return 0;
}