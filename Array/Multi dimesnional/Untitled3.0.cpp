//WAP to take m*n matrix and transpose it
#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i=0,j=0,n=0,m=0;
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
	//cal for transpose
	for(i=0;i<row;i++) 
	{
		for(j=0;j<col;j++)
		{
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose is:");
    for(i=0;i<col;i++) 
    {
		for(j=0;j<row;j++)
		{
           printf("\t%d",b[i][j]);
       }
       printf("\n");
   }
	return 0;
}
