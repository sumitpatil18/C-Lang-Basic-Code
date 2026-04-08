#include<stdio.h>
int main(){
    int num,count=0;
    printf("enter the number:");
    scanf("%d",&num);

    if(num>0){
        for(int i=1;i<num;i++){
            if(i>1){
                if(num%i==0){
                    count++;
                }
            }
        }
        if(count==0){
            printf("Given number is a prime...");
        }else{
            printf("Given number is cannot prime");
        }
    }else{
        printf("Given number is wrong...");
    }
    return 0;
}