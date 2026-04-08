#include<stdio.h>
int Calculate(int a,int b,int *sum,int *pdk,int *avr){
	
	//calculote OfSum
	*sum=a+b;
	//Calculate Of Product 
	*pdk=a*b;
	//Calcuolate of Average 
	*avr=(a+b)/2;
}
int main(){
	int a=20,b=5,sum,pdk=1,avr;
	Calculate(a,b,&sum,&avr,&pdk);
	printf("%d\n",sum);
	printf("%d\n",avr);
	printf("%d",pdk);
	return 0;
	
}