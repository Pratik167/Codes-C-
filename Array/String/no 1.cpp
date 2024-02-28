#include <stdio.h>
int main()
{
	char word[10];
	int count=0,i=0;
	printf("Enter Your word:");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{
		count++;
	}
	printf("\n The word is %s and number of characters is %d",word,count);
	return 0;
}
