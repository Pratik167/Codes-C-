#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *p,n=0,i=0,sum=0;
	printf("\n Enter how many numbers:");
	scanf("%d",&n);
	p=(int *) calloc(n,sizeof(int));//calloc take ','  and malloc uses'*'
	if(p==NULL)
	{
		printf("Xaina Yarr Memory nai");
		exit(0);
	}
	for(i=0;i<n;i++)
	{
		printf("\n Enter Number:");
		scanf("%d",p+i);
		sum=sum+*(p+i);
	}
	printf("\n The Sum is %d",sum);
	return 0;
}
