#include<stdio.h>
int main(){
    int startNo,endNo,sum=0;
    printf("Enter the starting number");
    scanf("%d",&startNo);
    printf("Enter the ending number");
    scanf("%d",endNo);
    for(int i=startNo;i<=endNo;i++){
        sum=sum+i;
    }
    printf("Addition Of number is: %d",sum);
    return 0;
}