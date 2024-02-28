#include <stdio.h>
int main()
{
	int a[10];
	int i=0;
	for(i=0;i<5;i++)
	{
	  printf("Enter 5 number");
	  scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
      printf("The value of a%d is %d\n",i,a[i]);
    }
	return 0;
}
