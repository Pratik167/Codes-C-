#include<stdio.h>
#include<math.h>
int armstrongnumber(int);
int main()
{
	int n=0,result;
	printf("enter a number: ");
	scanf("%d",&n);
	result=armstrong(n);
	if(result==1)
	{
		printf("Armstrong");
	}
	else
	{
		printf("Not Armstrong");
	}
}
int armstrong(int m)
{
	int count,temp1,temp2,rem,sum;
	temp1=m;
	temp2=m;
	
	
}
