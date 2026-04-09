#include<stdio.h>
void funFibonacci(){
    int num,firstNo=0,secondNo=1,temp;
    printf("Enter The Number :");
    scanf("%d",&num);
    int i;
    printf("Fibonacci Number is:");
    if(num>=2){
    	for(int i=0;i<num;i++){
    		if(i<=1){
    			temp=i;
			}else{
				temp=firstNo+secondNo;
				firstNo=secondNo;
				secondNo=temp;
			}
			printf("%d\t",temp);
		}
	}else{
		printf("Wrong value insert...");
	}
}
int main(){
    funFibonacci();
    return 0;
}