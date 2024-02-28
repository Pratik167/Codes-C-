#include<stdio.h>

int main(){
	int i,j,count,prime=0;
	
	for(i=500;i<=1500;i++)
	
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			count++;
		}
	      if(count==2)
	  {
		 printf("%d\n",i);
		 prime++;	
	  }
    }
printf("the total prime number is %d",prime);
return 0;
}
