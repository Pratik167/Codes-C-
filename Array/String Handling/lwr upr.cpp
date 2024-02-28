//strlwr
#include<stdio.h>
#include<string.h>
int main()
{
	char word[100];
	int i=0;
	printf("Enter a word: ");
	gets(word);
	strlwr(word);
	printf("%s",word);
	return 0;
}
