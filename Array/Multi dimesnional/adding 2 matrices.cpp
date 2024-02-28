//WAP to add two matrices
#include<stdio.h>
int main()
{
	int r=0,c=0,r2=0,c2=0;
	printf("Enter how many rows and columns u want:");
	scanf("%d %d",&r,&c);
	int a[r][c],i=0,j=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
