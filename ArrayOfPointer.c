#include <stdio.h>
int main(){   
    int a[5];//={10,12,13,14,15};
    int *ptr=&a[0];
    printf("Enter the number:\n");
    for(int i=0;i<=4;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<=4;i++){
        //This also print value of array
        printf("Elements array of are: %d\n",a[i]);
        //This also print value of array
        printf("Elements array of pointer are:%d\n",*ptr++);
    }
    return 0;
}
