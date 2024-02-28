#include<stdio.h>

int main() {
    char a[10], b[10];
    int i = 0, count1 = 0, count2 = 0, flag = 0;

    ent:
    	//input of first word
    printf("Enter the first word: ");
    gets(a);
    printf("Enter the second word: ");
    gets(b);

    for (i = 0; a[i] != '\0'; i++) 
	{
        count1++;
        if (a[i] >= 65 && a[i] <= 90) 
		{
            a[i] = a[i] + 32;
        }
    }

    for (i = 0; b[i] != '\0'; i++) 
	{
        count2++;
        if (b[i] >= 65 && b[i] <= 90) 
		{
            b[i] = b[i] + 32;
        }
    }

    if (count1 == count2) {
        for (i = 0; i < count1; i++) 
		{
            if (a[i] != b[i]) 
			{
                flag = 2;
                break;
            }
        }
    } else {
        printf("Not the same word length\n");
        goto ent;
    }

    if (flag == 0) {
        printf("\nSame words");
    } else {
        printf("Not the same words");
    }

    return 0;
}

