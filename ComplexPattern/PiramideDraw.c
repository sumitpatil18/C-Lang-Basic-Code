#include<stdio.h>
int main()
{
	int n;
	printf("Enter The Number How Many ( * ) Print: ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<=n*2-1;j++){
			if(j>=n-(i-1)&&j<=n+(i-1)){
				printf("*");
			
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}