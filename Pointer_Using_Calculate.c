#include<stdio.h>
void  fun(int a,int b,int *avr,int *sum,int *pdct){
    // Calculate The Sum 
    *sum=a+b;
    printf("User Sum Of :%d\n",*sum);
    // Calculate The Product
    *pdct=a*b;
    printf("User Product Of :%d\n",*pdct);
    // Calculate The Avrage
    *avr=(a+b)/2;
    printf("User Average Of :%d\n",*avr);
    
}
int main(){
    int a=10,b=5,sum=0,avr,pdct=0;
   // int ptr;
    fun(a,b,&avr,&sum,&pdct);
    printf("Sum Of :%d\n",sum);
    printf("Product Of :%d\n",pdct);
    printf("Average Of :%d\n",avr);
    return 0;
}