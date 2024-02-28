#include<stdio.h>
int main()
{
	int *p;
	int x=10;
	p=&x;
	printf("\n Value of x is %d",x);
	printf("\n Value of x is %d",*p);
	printf("\n Address of x is %p",&x);
	printf("\n Address of x which is the value of p:::::: %p",p);
	printf("\n Value of p is %p",p);
	printf("\n Address of p is %p",&p);
	return 0;
}
