#include<stdio.h>
void fun(){
	int firstNo,secondNo,thirdNo,avr,sum;
	printf("Enter the number's :");
	scanf("%d%d%d",&firstNo,&secondNo,&thirdNo);
	sum=firstNo+secondNo+thirdNo;
	avr=sum/3;
	printf("Avrage of :%d",avr);
}
int main(){
	fun();
	return 0;
}