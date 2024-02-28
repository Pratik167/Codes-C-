#include <stdio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=4;i++)
	{ 
	for(j=1;j<=4;j++)
		{
		
		if((i+j)%2==0)       /*first run ma i=1 , j=1
	                        ani (1+1)%==0 true hunxa. so # gets printed
							 second ma i=1,j=2(kina ki j ko loop still running)
							 so  (1+2)==0  false hunxa kina ki remainder is 1
							 so * gets printed . same for the rest.*/	
 		{
			printf("#\t");	
		
		}
		else
		printf("*\t");
	}
	printf("\n");
	}
	
	
	return 0;
}
