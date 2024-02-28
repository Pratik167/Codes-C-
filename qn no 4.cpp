#include <stdio.h>
int main()
{
	int i=0,j=0;
	for(i=5;i>=1;i--)
	{ 
	for(j=1;j<=i;j++)            /*first run ma i=5 and j=1
	                            so since j=1 , 1 gets printed first 
	                        then on second i=5(still cause j ko loop running)
	                     j=2 , since j=2 , 2 gets printed along same line as 1
	                       that runs until j loop is false; till then the output 
						   will be  1 2 3 4 5.
						   then i=4 because i--,j=1 same thing happens but 
						   since j is supposed to be <= to i , j runs only 4 times 
						   so the output will be like  1 2 3 4 
						   so on until i ko loop is false which occurs when i=0    
	                             */
		{
		   printf("%d\t",j);
		
	    }
	printf("\n");
	}
	
	
	return 0;
}
