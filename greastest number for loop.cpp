//WAP to find greastest Number among ten numbers given by the User.
#include<stdio.h>
int main()
{
	int i,num,max;
	printf("Enter a Number 1:");
	scanf("%d",&max);  // max =10
	
	for(i=1;i<=10;i++)
	{
		printf("Enter Number:");  //num=
		scanf("%d",&num);
		if (num>max) //10>0
		{
			max=num;
		}
	}
	printf("The Greatest Number is:%d\n",max);
	return 0;
	
}

