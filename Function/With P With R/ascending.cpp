#include<stdio.h>
int ascending_order(int [],int,int);
int main()
{
	int a[100],n,i;
	printf("enter how many elements?: ");//asking user for the number of elements
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter a[%d] elements: ",i);//taking the elements from user
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=ascending_order(a,n,i);//calling
	}
	printf("numbers in ascending order is: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}

int ascending_order(int a[],int n,int m)
{
	int i,temp;
	for(i=m+1;i<n;i++)
	{
		if(a[m]>a[i])
		{
			temp=a[m];
			a[m]=a[i];
			a[i]=temp;
		}
	}
	return a[m];      
}
