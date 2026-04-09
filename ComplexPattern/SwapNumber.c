#include<stdio.h>
void funSwap(){
    int a=10,b=5;
    printf("Before A and B value :\n");
    printf("Value of a is:%d \n",a);
    printf("Value of b is:%d \n",b);
    a+=b;
    b=a-b;
    a-=b;
    printf("After A and B value :\n\n");
    printf("Value of a is:%d\n",a);
    printf("Value of b is:%d",b);
}
int main(){
    funSwap();
    return 0;
}