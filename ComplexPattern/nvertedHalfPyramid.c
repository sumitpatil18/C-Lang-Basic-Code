#include<stdio.h>
int main()
{
	int n,i,j;
//	printf("Enter The Number  Hoe Many Star Print");
//	scanf("%d",&n);
	for(int i=1;i<=5;i++)
	{
		for(int j=5;j>=i;j--)
		{
			printf(" * ");
					
		}
		printf("\n");	
	}
	return 0;
}