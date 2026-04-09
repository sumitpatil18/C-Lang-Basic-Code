#include<stdio.h>
void fun(int a,int b,int *pdct,int *sum,int *avr){
    // Calculate The Sum
    *sum=a+b;
    printf("Sum Of :%d\n",*sum);
    // Calculate The Product
    *pdct=a*b;
    printf("Product Of:%d\n",*pdct);
    //Calculate The Average
    *avr=(a+b)/2;
    printf("Average Of :%d\n",*avr);
}
int main(){
    int a=10,b=5,sum,pdct,avr;
    fun(a,b,&pdct,&sum,&avr);
    
    printf("Value Of Sum:%d\n",sum);
    printf("Value Of Average :%d\n",avr);
    printf("Value Of Product :%d",pdct);
    return 0;
}