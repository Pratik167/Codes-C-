// a[i] can be written as *(a+i);
// &a[i] can be written as (a+i);
#include <stdio.h>
int main()
{
	int *p,i=0,a[5];
	for(i=0;i<5;i++)
	{
		printf("\n Enter a[%d] element:",i);
		scanf("%d",&a[i]);
	}
	p=&a[0];//p=a; also same only in the case of array
	
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] element is %d",i,*(p+i));
	}
	return 0;
}
