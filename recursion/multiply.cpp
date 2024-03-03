#include <stdio.h>
int multiply(int);
int main()
{
	int result=0,n=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	result=multiply(n);
	printf("multiply = %d",result);
	return 0;
}
int multiply(int n)
{
	if (n!=0)
	return n*multiply(n-1);
	else
	return 1;
}
