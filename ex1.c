#include<stdio.h>

/*
sample i/p:
n=3;

sample o/p:
**1
*22
333

*/





void main()
{
	int n,i,j,k;
	
	printf("\n enter value of n:\n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("*");
			
		}
		for(k=j;k<=n;k++)
		{
			printf("%d",i);
			
		}
		printf("\n");
		
	}
	
}
