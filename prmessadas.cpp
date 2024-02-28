#include<stdio.h>
int main()
{
	int i=0,count=0,rem=0,j=1;
	for(i=2;i<=100;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			 count++;
			}
		}
		if(count==2)
		printf("%d:Prime\n",i);
		else
		printf("\t\t%d:composite\n",i);
		count=0;
	}
	return 0;
	
}
