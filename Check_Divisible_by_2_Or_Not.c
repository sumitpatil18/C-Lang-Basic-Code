#include<stdio.h>
int main(){
    int a;
    printf("Enter Any Number:");
    scanf("%d",&a);
    if (a%2==0){
        printf("Number is divisible by 2 : %d",a);
    }
    else{
        printf("Number is not divisible by 2 : %d",a);
    }
}