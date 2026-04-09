#include<stdio.h>
void fun(){
    int n,fact=1;
    printf("Enter The Number:");
    scanf("%d",&n);
    for (int  i = 1; i <=n; i++){
        fact=fact*i;
    }
    printf("%d",fact);
}
int main(){
    fun();
    return 0;
    
}