#include<stdio.h>
int main()
{
	char word1[20],sword[20];
	int i=0,j=0,count1=0,count2=0,flag=0;
	printf("enter first word: ");
	gets(word1);
	printf("enter second word: ");
	gets(sword);
	// to make letters in small for first word
    for(i=0;word1[i]!='\0';i++)//goes from i ko 0 index to the index which has \0 in it
    {
    	if(word1[i]>=65&&word1[i]<=90)
    	{
    	word1[i]=word1[i]+32;
       }
       count1++;
    }
    // to make letters small for second word
    for(i=0;sword[i]!='\0';i++)
    {
    	
    	if(65<=sword[i]&&sword[i]<=90)
    	{
		 sword[i]=sword[i]+32;
		}
		count2++;
	}
	if(count1==count2) //if the amount of letters in both words is same or not
	{
	for(i=0;i<count1;i++)
	{
		if(word1[i]==sword[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
  }
	huh:
	for(i=0;i<=count1&&i<=count2;i++)
    {
    	if(word1[i]<sword[i])/*ascee value check gareko -- first ma first letter ko ascii value check garxa
    	                    same xa bhane next until end ma */
    	{
    		printf("%s come before %s",word1,sword);
    		break;
		}
		if(word1[i]>sword[i])/*ascii value of 0 index of word 1 greater than of ascii value of word 1 in 0 index
		if same goes to check the 1 index of both */
		{
		printf("%s come before %s",sword,word1);
		break;
		}
	}	
     if(flag==1)
     {
     	printf("the words are same");
	 }
	return 0;
}
