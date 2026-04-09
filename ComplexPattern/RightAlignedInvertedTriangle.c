#include<stdio.h>
void Draw(){
    /*output 
    *****
     ****
      ***
       **
        *
     
       */
   int a=5,i,j,k=5;
   for(i=1;i<=5;i++){        // row
        for(j=1;j<=i;j++){     // space
           printf(" ");
        }
        for (k=6;k>=j;k--){       // collum
           printf("*");
        }
        
        printf("\n");
    }
}
int main(){
    Draw();
    return 0;
}