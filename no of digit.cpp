#include <stdio.h>
int main()
{
	int num=0,rem=0,count=0;
	printf("\nEnter a number:\t");
	scanf("%d",&num);
	while(num!=0)
	{
		num=num/10;
			count++;
	}
	printf("no of digit=%d",count);
		return 0;
}
