//Multidimensional array
#include<stdio.h>
int main()
{
	int a[2][2],i=0,j=0;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("enter a[%d][%d] elements:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
