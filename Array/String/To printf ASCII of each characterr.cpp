//WAP to print ASCII values of each and every character of the string given by the user.
#include <stdio.h>
int main()
{
	char a[100];
	int i=0;
	
	printf("Enter your String:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("The string %c has ASCII Value: %d\n",a[i],a[i]);
	}
	return 0;
}

