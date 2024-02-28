//wap to pass array into a function WPWR to identify the number of prime number in an array
#include <stdio.h>
int prime_array(int [],int);
int main()
{
	int result=0,a[100],n=0,i=0;
	printf("\n Enter how many numbers you wawnt in array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	result=prime_array(a,n);//call
	printf("\n The number of prime numbers is %d ",result);
	return 0;
}
int prime_array(int m[],int x)
{
	int prime_array=0,i=0,count=0,j=0,f_count=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<i;j++)
		{
			if (m[i]%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			f_count++;
		}
		count=0;
	}
	return f_count;
}

