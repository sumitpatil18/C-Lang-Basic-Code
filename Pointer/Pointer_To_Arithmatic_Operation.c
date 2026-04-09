#include<stdio.h>
void fun(){
    int a=10;
    int *ptr=&a;
    printf("%d\n",ptr);
    ptr++;
    printf("%d\n",ptr);
    ptr--;
    printf("%d\n",ptr);
    int x=20;
    int y=30;
    int *ptr1=&x;
    int *ptr2=&y;
    printf("Value of ptr1 is: %d\n",ptr1);
    printf("Value of ptr2 is:%d\n",ptr2);
    ptr2=ptr2-ptr1;
    printf("Subtract pointer value is:%d\n",ptr2);


}
int main(){
    fun();
    return 0;
}