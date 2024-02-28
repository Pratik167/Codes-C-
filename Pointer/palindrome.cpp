#include <stdio.h>
int main()
{
	int num=0,temp=0,rem=0,rev=0;
	int *p,*q,*r,*t;
	p=&num;
	q=&rev;
	r=&rem;
	t=&temp;
	printf("Enter num:");
	scanf("%d",p);
	*t=*p;
	while(*p>0)
	{
		*r=*p%10;
		*q=*q*10+*r;
		*p=*p/10;	
	}
	printf("reverse is %d",*q);
	if(*t==*q)
	printf("\n %d is palindrome",*t);
	else
	printf("\n %d is not palindrome",*t);
	
	return 0;
}
