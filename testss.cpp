#include <stdio.h>
int main()
{
	int num=0,rem=0,counter=0,i=1,j=1;
	while(j<=10);
	{
	printf("Enter a number");
	scanf("%d",&num);
	while(i<=num);
	{
		rem=num%i;
		if(rem==0)
		{
			counter++;
		}
		i++;	
	}
	if(counter==2)
	{
		printf("the number is prime");
	}
	else
	printf("Odd");

return 0;
}
}
