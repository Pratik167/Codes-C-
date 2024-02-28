/*      WAP to find greastest Number among ten numbers using array and also
mention the index of the greatest number       */
#include<stdio.h>
int main()
{
	int i=0,a[10],gt=0,t=0;
	//for loop to take input in array
	for(i=0;i<=9;i++)
	{
		printf("Enter value: ");
		scanf("%d",&a[i]);
		if(a[i]>gt)
		{
			gt=a[i];
		}
	}
	for(i=0;i<=9;i++)
	{
		if(gt==a[i])
		{
			t=i;
		}
	}
	printf("The greatest number is:%d and is in index:%d",gt,t);
	
	return 0;
	
}

