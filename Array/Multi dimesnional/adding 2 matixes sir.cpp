#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i=0,j=0;
	int row=0,col=0;
	printf("\n Enter no if rows and columns:");
	scanf("%d %d",&row,&col);
	//input for a matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//input for b matrix
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter b[%d][%d] elements:",i,j);
			scanf("%d",&b[i][j]);
			//adding and putting the value in c
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The Answer for c:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\t%d",c[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
