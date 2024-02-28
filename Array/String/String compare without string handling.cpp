#include <stdio.h>

int main() {
    char string1[100], string2[100], combinedstr[200];
    int len1 = 0, len2 = 0, i, j;

    // Input the first string
    printf("Enter the first string: ");
    scanf("%[^\n]%*c", string1);
    // Input the second string
    printf("Enter the second string: ");
    scanf("%[^\n]%*c", string2);

    // Calculate the lengths of both strings
    while (string1[len1] != '\0') 
	{
        len1++;
    }

    while (string2[len2] != '\0') {
        len2++;
    }

    // Copy characters from the first string
    for (i = 0; i < len1; i++) {
        combinedstr[i] = string1[i];
    }

    // Add a space between the strings
    combinedstr[len1] = ' ';

    // Copy characters from the second string
    for (j = 0; j < len2; j++) 
	{
        combinedstr[len1 + 1 + j] = string2[j];
    }

    // Add null terminator at the end of the concatenated string
    combinedstr[len1 + 1 + len2] = '\0';

    // Print the concatenated string
    printf("Concatenated string: %s\n", combinedstr);

    return 0;
}
