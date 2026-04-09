#include<stdio.h>
int main(){
	int a;
	//pass the address of a to pointer p
	int *p=&a;
	// Assign value 50 to the variable 'a' using pointer 'p'
    // (*p means "value at the address stored in p")
 	*p=50;

	//Print value of a 
	printf("Value Of P %d\n",*p);
	//print address of a 
	printf("Value Of P %d\n",p);
	//print value of a
	printf("Value Of a %d",a);

	return 0;
}