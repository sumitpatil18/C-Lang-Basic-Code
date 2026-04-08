#include<stdio.h>
void Demo(){
    // 3 row and 2 column
    int a[3][2]={{10,20},{30,40},{50,60}};
    for (int i = 0; i <=2; i++){
        for (int  j = 0; j <=1; j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
int main(){
    Demo();
    return 0;
}