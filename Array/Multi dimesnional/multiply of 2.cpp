//WAP to multiply 2 matrices
#include <stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i=0,j=0;
	int row1=0,col1=0,row2=0,col2=0;
	mathi:
	printf("\n Enter no if rows and columns for a:");
	scanf("%d %d",&row1,&col1);
	printf("\n Enter no if rows and columns for b:");
	scanf("%d %d",&row2,&col2);
	//input for a matrix
	for(i=0;i<row1;i++)
	{
		for(j=0;j<col1;j++)
		{
			printf("enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	//input for b matrix
	for(i=0;i<row2;i++)
	{
		for(j=0;j<col2;j++)
		{
			printf("enter b[%d][%d] elements:",i,j);
			scanf("%d",&b[i][j]);
			//adding and putting the value in c
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
}
