#include<stdio.h>
void check(int *n){
	printf("Address of user Function :%d\n",&n);	
}
int main(){
	int n=4;
	//Pass a adress of number 4 
	printf("Address of main Function :%d\n",&n);
	check(&n);
	return 0;
}