#include <stdio.h>
int evenodd(int);
int main()
{
	int n, result;
	printf("Enter the Number:");
	scanf("%d",&n);
	result=evenodd(n);
	if(result==0)
	{
		printf("Odd");
	}
	else
	{
		printf("Even");
	}
	return 0;
}
int evenodd(int m)
{
	int r;
	r=m%2;
	if(r==0)
	{
		return 1;
	}
}
