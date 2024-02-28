#include<stdio.h>
int main()
{
	int n=0,temp=0,d=0,r=0;
	printf("Enter num:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;	
	}
	printf("reverse is %d",r);
	if(temp==r)
	printf("\n  %d is palindrome",temp);
	else
	printf("\n %d is not palindrome",temp);
	
	return 0;
}
