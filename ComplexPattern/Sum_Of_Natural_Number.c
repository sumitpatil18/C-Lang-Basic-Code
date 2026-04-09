#include<stdio.h>
int main(){
    int a,sum=0;
    printf("Enter The nUmber:");
    scanf("%d",&a);
    for (int  i = 1; i <= a; i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}