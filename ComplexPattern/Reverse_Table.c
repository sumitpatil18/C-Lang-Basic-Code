#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter The Number :");
    scanf("%d",&n);
    for (int i = 10; i >=1; --i){
        sum=n*i;
        printf("%d\n",sum);
    }
    return 0;
}