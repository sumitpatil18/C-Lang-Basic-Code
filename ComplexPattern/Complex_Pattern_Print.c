#include<stdio.h>

int main(){
    /*  1
        2 4
        3 5 7
        6 8 10 12
        9 11 13 15 17
        14 16 18 20 22 24
    */

    /*
        1 
        2 4 
        4 6 8 
        7 9 11 13 
        11 13 15 17 19 
        16 18 20 22 24 26   
    */
    int start=0,temp=1,num=0;
    for (int i=1; i<=6;i++){
        for(int j=1;j<=i;j++){
            //printf("%d",j);
            printf("%d ",temp);
            temp=temp+2;
        }
        temp=temp-i;
        printf("\n");
    }
   return 0;
}
