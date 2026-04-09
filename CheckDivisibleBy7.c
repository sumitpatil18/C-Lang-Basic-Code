#include<stdio.h>
int main(){
    int n;
    int i=1;
    do{
        printf("Enter The Number :");
        scanf("%d",&n);
        //printf("%d",n);
        if(n%7==0){
            break;
        }
        i++;
    } 
    while (1);
        printf("Program End:");

    return 0;
}