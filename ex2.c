#include<stdio.h>

/*

sample i/p:
rows->  r :2
stars-> n:5


sample o/p:

*****
****

*/

//odd rows should have n stars
//even rows should have (n-1) stars


void main()
{
	int r,n,i,j,k;
	
	printf("\n enter no of rows:\n");
	scanf("%d",&r);
	
	printf("\n enter no of stars:\n");
	scanf("%d",&n);
	
	
		
	
	
	for(i=1;i<=r;i++)
	{
		if((i%2)!=0)
		{
			for(j=1;j<=n;j++)
			{
				printf("*");
			}
			
		}
		else
		{
			for(j=1;j<=n-1;j++)
			{
				printf("*");
			}
			
		}
		printf("\n");
		
	}
	

}
