#include<stdio.h>
int  Factorial(int a){
     int sum=1,N1;
    if(a==0){
        return 1;
    }
    N1=Factorial(a-1);
    sum=N1*a;
    return sum;
}
int main(){
    printf("Factorial Is : %d",Factorial(5));
    return 0;
   
}