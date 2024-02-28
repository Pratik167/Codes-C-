#include<stdio.h>
int main()
{
	int num,tn,i,j,ans;
	printf("enter a number: ");
	scanf("%d",&num);
	tn=2*num-1;
	for(i=0;i<tn;i++)
	{
		for(j=0;j<tn;j++)
		{
			ans=i<j?i:j;//if i<j  assign value of i to ans else j to ans.
			ans=ans<tn-i?ans:tn-i-1;
			ans=ans<tn-j-1?ans:tn-j-1;
			printf("%d ",num-ans);
		}
		
		printf("\n");
	}
	return 0;
}
