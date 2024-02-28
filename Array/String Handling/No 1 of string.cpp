//strlen
#include <stdio.h>
#include <string.h>
int main()
{
	char word[60];
	int count=0;
	printf("Enter Your word:");
	gets(word);//to count space paxadi ko words too
	count=strlen(word);
	printf("\n The word is %s and number of characters is %d",word,count);
	return 0;
}
