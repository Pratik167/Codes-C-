#include <stdio.h>
int main() 
{
    int a[100],n=0,i=0,temp= 0;
    kist:
    printf("Enter how many numbers you want in the array: ");
    scanf("%d",&n);
    if (n>100) 
	{
        printf("\nValue of range is out of bounds\n");
        goto kist;
    }
    // Input of array
    for (i=0;i<n;i++) 
	{
        printf("\nEnter a[%d] element:",i);
        scanf("%d",&a[i]);
    }
    // Reversing the array
    for(i=0;i<n/2;i++) 
	{
        temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    // Displaying the reversed array
    printf("\nThe resulting array is:");
    for (i=0;i<n;i++) 
	{
        printf("\na[%d] element: %d",i,a[i]);
    }
    return 0;
}

