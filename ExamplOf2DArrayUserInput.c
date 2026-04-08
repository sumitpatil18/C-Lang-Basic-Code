#include<stdio.h>
void demo(){
    int arr[2][3];//{{70,80,90},{40,50,60}};
    int *a;
    printf("Enter the first student marks\n");
    for(int x=0;x<=1;x++){
        for(int y=0;y<=2;y++){
            scanf("%d",&arr[x][y]);
        }
        printf("Enter the second student marks:\n");
    }
    for (int  i = 0; i<=1; i++){
        for(int j=0;j<=2;j++){
            if(i==0){
            printf("Mark Of first student:%d\n",arr[i][j]);
            }else{
                printf("Mark of second student:%d\n",arr[i][j]);
            }
        }
    }
}
int main(){
    demo();
    return 0;
}