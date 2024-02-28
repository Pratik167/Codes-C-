//WAP to enter a word to count no of vowels
#include<stdio.h>
int main()
{
	char word[100];
	int vcount=0,no=0,x=0,alphabet=0,cons=0,total=0,sp=0, i=0;
	
	printf("Enter a word: ");
	gets(word);
	
	for(i=0;word[i]!='\0';i++)
	{
		total++; //counts every character
		//for vowels both capital and small
		if(word[i]=='a'||word[i]=='A'||
		word[i]=='e'||word[i]=='E'||
		word[i]=='i'||word[i]=='I'||
		word[i]=='o'||word[i]=='O'||
		word[i]=='u'||word[i]=='U')
		{
			vcount++;  //counts only vowels
		}
		//for space
		if(word[i]==' ') //if(word[i]==32)
		{
			sp++;
		}
		//for numerals 0-9
		if(word[i]>=48&&word[i]<=57)
		{
			no++;
		}
		//for both capital and small alphabet
		if(word[i]>=65&&word[i]<=90||word[i]>=97&&word[i]<=122)
		{
				alphabet++;		
		}
	}
	cons=alphabet-vcount;// kati ota alphabet xa - vowel ko count kati ota xa
	//for special characters
	x=total-vcount-sp-cons-no;//x bhaneko special characters ko lagi
	//printing section
	
	printf("\n No of vowels is %d",vcount);
	printf("\n No of spaces is %d",sp);
	printf("\n No of words is %d",sp+1);
	printf("\n No of numbers is %d",no);
	printf("\n No of alphabets is %d",alphabet);
	printf("\n No of consonants is %d",cons);
	printf("\n No of special symbols is %d",x);
	printf("\n Total no of characters is %d",total);
	
	return 0;
}
