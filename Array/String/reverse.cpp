//WAP to Enter a word and reverse it
#include<stdio.h>
int main()
{
	char word[100],rev[100];
	int i=0,count=0;
	printf("Enter a word: ");
	gets(word);
	for(i=0;word[i]!='\0';i++)
	{     
		count++;
	}
	for(i=0;word[i]!='\0';i++)
	{
		rev[i]=word[count-i-1];
	}
	printf("\nReverse of %s word is %s",word,rev);
	
	return 0;
}
