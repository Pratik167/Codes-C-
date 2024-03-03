#include<stdio.h>
int fibonacci(int);
int main()
{
	int i=0,n=0;
	printf("Enter Value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%d\t",fibonacci(i));
	}
	return 0;
}
int fibonacci(int n)
{
	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return (fibonacci(n-1)+fibonacci(n-2));
}


