#include<stdio.h>
int main(){
    int a=15;
    int *p=&a;
    //int b=*p;
    printf("Address Of A Is : %p\n",p);
    printf("%p\n",&a);
    printf("%p",&p);

    return 0;
}
