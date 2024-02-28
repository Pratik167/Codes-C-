//WAP to ask user to enter n number and print highest and lowest
#include <stdio.h>
int main()
{
	int a[100],i=0,temp=0,j=0,n=0,high=0,low=0;
	label:
	printf("Enter ho many numbers you want in array");
	scanf("%d",&n);
	if(n>100)
	{
		printf("\n Sorry! You can't enter greater Than 100");
		goto label;
	}
	for(i=0;i<=n-1;i++)
	{
		printf("\n Enter a[%d]value",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(i=1;i<=n-1;i++)
		{
			if(a[i]>high)
			{
				high=a[i];
			}
			if(a[i]<low)
			{
				low=a[i];
			}
		}
	}
	printf("%d:is the highest\n",high);
	printf("%d:is the lowest",low);
	return 0;
}
