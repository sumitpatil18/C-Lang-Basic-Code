#include<stdio.h>
int main(){
	int a=10;
	int *ptr=&a;
	printf("value Of Variable : %d\n",a);
	printf("Address Of variable :%p\n",ptr);
	printf("Address Of Pointer :%p",&ptr);
	return 0;
	}