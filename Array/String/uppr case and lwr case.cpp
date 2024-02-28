//WAP to take word from user and convert it into lower or uppercase.
#include<stdio.h>
int main()
{
	char word[100];
	int i=0;
	printf("Enter a word: ");
	gets(word);
	for(i=0;word[i]!='\0';i++)//Kist
	{
		if(word[i]>=65&&word[i]<=90)//A-Z
		{
			word[i]=word[i]+32;
			continue;
		}
		if(word[i]>=97&&word[i]<=122)//a-z
		{
			word[i]=word[i]-32;
		}
	}
	puts(word);
	return 0;
}
