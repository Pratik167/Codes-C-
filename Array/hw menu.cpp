#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    // yo chai for Correct username and password
    char correctUsername[50] = "KIST";//initialize gareko
    char correctPassword[50] = "KIST";

    // User lai dine input(array)ko range for username and password
    char enteredUsername[50];
    char enteredPassword[50];

here:
    // user le enter a username
    printf("Enter username: ");
    scanf("%s", enteredUsername);

    // user le enter a password
    printf("Enter password: ");
    scanf("%s", enteredPassword);

    // Check if the entered username and password are correct
    if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) 
	{
        printf("Login successful. Welcome, %s\n", enteredUsername);
    } else 
	{
        printf("Incorrect username or password. Login failed.\n");
        goto here;
    }

    // yo pachi Code for the menu
    int i = 0, a[10], choice, t, lt = 99999999, count = 0, j = 0;//variables for all the code below

    // For loop to take input in array
    for (i = 0; i <= 9; i++) 
	{
        printf("Enter value %d : ",i);
        scanf("%d", &a[i]);
    }

    do 
	{
        printf("\t\t\t\t\tMENU\t\t\n");
        printf("\t\t\t\t1. To show all the odd and even numbers\t\t\n");
        printf("\t\t\t\t2. To list all the Prime Numbers\t\t\n");
        printf("\t\t\t\t3. To show the lowest Number\t\t\n");
        printf("\t\t\t\t4. Exit\n");
        printf("\n\n \t\t\tChoose One of the options:");
        scanf("%d", &choice);

        switch (choice) 
		{
            case 1:
                printf("\nEven numbers: ");
                for (i = 0; i <= 9; i++) 
				{
                    if (a[i] % 2 == 0) 
					{
                        printf("%d ", a[i]);
                    }
                }

                printf("\nOdd numbers: ");
                for (i = 0; i <= 9; i++) 
				{
                    if (a[i] % 2 != 0) 
					{
                        printf("%d ", a[i]);
                    }
                }
                break;
            case 2:
    printf("The prime numbers are:\n");
    for (i = 0; i <= 9; i++) 
	{
        count = 0; // Resets count for each number
        for (j = 1; j <= a[i]; j++) 
		{
            if (a[i] % j == 0) 
			{
                count++;
            }
        }
        if (count == 2) 
		{
            printf("%d\t\n", a[i]);
        }
    }
    break;
            case 3:
                for (i = 0; i <= 9; i++) 
				{
                    if (a[i] < lt)
					{
                        lt = a[i];
                    }
                }
                printf("The lowest number is: %d\n", lt);
                break;
            case 4:
                printf("Thanks for your time\n");
                exit(0);
            default:
                printf("Invalid input, Please Enter Again\n");
        }
    } 
	while (choice != 4);

    return 0;
}

