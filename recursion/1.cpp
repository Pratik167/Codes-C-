#include <stdio.h>
int sum(int);
int main()
{
	int result=0,n=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	result=sum(n);
	printf("sum = %d",result);
	return 0;
}
int sum(int n)
{
	if (n!=0)
	return n+sum(n-1);
	else
	return 0;
}
