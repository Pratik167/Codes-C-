#include <stdio.h>
int main()
{
	int a[10],i=0,temp=0,j=0;
	printf("\t\t\t\t\tEnter 10 Values:\t\t\t");
	for(i=0;i<=9;i++)
	{
		printf("\n Enter a[%d]element:",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=9;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}

		}
	}
	for(i=0;i<=9;i++)
	{
	printf("%d\n",a[i]);
    }
	
	return 0;
}
