#include<stdio.h>
int main()
{
	int i=0,count=0,rem=0,j=0,count2=0,lowerlimit,upperlimit,primecnt;
	printf("Enter Lower and upper limit respectively:");
	scanf("%d%d",&lowerlimit,&upperlimit);
	primecnt=upperlimit-lowerlimit+1;//+1 because lower and upper limit are inclusive.
	
	for(i=lowerlimit;i<=upperlimit;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
			 count++;
			}
		}
		if(count==2)
		{
		  printf("%d\n",i);
	    
		  count2++; //count 2 le chai counts number of prime number
	    }
		count=0;
	}
	printf("\n\nThe number of prime are:%d",count2);
	                    /*primecnt is actually the total number from 500to1500
	              which is 1001 so primecnt-count2=  1001-no of composite.*/
	return 0;	
}
