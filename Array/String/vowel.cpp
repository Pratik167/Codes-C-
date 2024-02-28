/*Wap to enter a sentece and count number of 
a. number of vowel   b. no of consonant  c. number of words  d.integers
e. special symbols.*/
#include <stdio.h>
int main()
{
	char word[100];
	int count=0,i=0,total=0,count1=0,c=0;
	printf("Enter your sentences:");
	gets(word);
	
	for(i=0;word[i]!='\0';i++)
	{
		total++;
		if
		(word[i]=='a'||word[i]=='A'||
		word[i]=='e'||word[i]=='E'||
		word[i]=='i'||word[i]=='I'||
		word[i]=='o'||word[i]=='O'||
		word[i]=='u'||word[i]=='U')
		{
				count++;
		}
		else
		{
			c++;
		}	
	}
	printf("\n The word is %s and number of vowels is %d\n and total characters are %d",word,count,total);
	printf("\n%d",c);	
	
	return 0;
}
