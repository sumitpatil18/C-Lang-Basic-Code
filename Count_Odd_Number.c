#include<stdio.h>
void fun(int arr[],int n){
    for(int i=0;i<=n;i++){
        int x=0;
        if(arr[i]%2 != 0){
            printf("This are odd number in array:%d\n",arr[i]);
        }
        x=0;
    }
}
int main(){
    int arr[5];
    for(int x=0;x<=4;x++){
        printf("Enter the array element:");
        scanf("%d",&arr[x]);
    }
    int n=4;
    fun(arr,n);
    return 0;
}