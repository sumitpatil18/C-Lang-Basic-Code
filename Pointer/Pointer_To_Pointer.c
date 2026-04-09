#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	// pointer to pinter
	// store address of another poiinter
	int **pptr=&ptr;
	
	printf("Integer pointer :%d\n",a);
	printf("Integer pointer :%d\n",&a);
	printf("only  pointer :%d\n",ptr);
	printf("only  pointer :%d\n",&ptr);
	printf("pointer To Pointer pointer :%d\n",pptr);


}