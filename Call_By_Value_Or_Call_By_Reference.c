#include<stdio.h>
//Call By Value 
void Demo_call_By_value(int n){
    n=n*n;
    printf("Square Is:%d\n",n);
}
//Call By Reference
void Demo_call_By_refernce(int *a){
    *a=(*a)*(*a);
    printf("Value Of reference:%d",*a);
}
int main(){
    int number=5;
    printf("Value Of Number :%d\n",number);
    Demo_call_By_value(number);
    Demo_call_By_refernce(&number);
    return 0;
}
