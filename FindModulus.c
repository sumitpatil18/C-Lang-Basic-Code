#include<stdio.h>
	void fun(){
		int a,b;
		printf("Give the  number to be divided");
		scanf("%d",&a);
		printf("Gve the number you divide by");
		scanf("%d",&b);
		a=a%b;
		printf("Modulus is:%d",a);
	}
int main(){
	fun();
	return 0;
}