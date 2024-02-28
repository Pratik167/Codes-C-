#include <stdio.h>

int main() 
{
	int i=0,r=0;
	printf("Enter a number");
	scanf("%d",&i);
	while(i>0)
	{
		r=i%10;
		printf("%d",r);
		i=i/10;
	}
    return 0;
}

