#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter The Table value");
    scanf("%d",&n);
    for (int  i = 1; i <=10; i++){
        sum=n*i;
        printf("%d \n",sum);
    }
    return 0;
}