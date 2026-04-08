#include<stdio.h>
void Addition(){
	int a,sum=0;
    printf("Enter The Number :");
    scanf("%d",&a);
    for (int i = 1; i <=a; i++){
        sum=sum+i;
    }
    printf("Sum Of Natiral number :%d",sum);
}
int main(){
    Addition();
    return 0;
}