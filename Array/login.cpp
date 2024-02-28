#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() 
{
    // yo chai correct name ra password 
    char correctUsername[50] = "KIST";//initialized first mai
    char correctPassword[50] = "KIST";

    // yo chai user le input garne name ra password ko lagi array
    char enteredUsername[50];
    char enteredPassword[50];
here:
    // Prompt the user to enter a username
    printf("Enter username: ");
    scanf("%s", enteredUsername);

    // Prompt the user to enter a password
    printf("Enter password: ");
    scanf("%s", enteredPassword);

    // Check if the entered username and password are correct
    if (strcmp(enteredUsername, correctUsername) == 0 && strcmp(enteredPassword, correctPassword) == 0) 
	{
        printf("Login successful. Welcome, %s\n", enteredUsername);
        
    } 
	else 
	{
        printf("Incorrect username or password. Login failed.\n");
        goto here;
    }
    //after this is code for the menu
    
    
	
     int i=0,a[10],m,t,lt=99999999,count=0,j=0;
	//for loop to take input in array
	for(i=0;i<=9;i++)
	{
		printf("Enter value : ");
		scanf("%d",&a[i]);
    }
    do
	{
	
    printf("\t\t\t\t\tMENU\t\t\n");
    printf("\t\t\t\t1.To show all the odd and even numbers\t\t\n");
    printf("\t\t\t\t2.To list all the Prime Numbers\t\t\n");
    printf("\t\t\t\t3.To show the lowest Number\t\t\n");
    printf("\t\t\t\t4.Exit");
    printf("\n\n \t\t\tChoose One of the options:");
    scanf("%d",&m);
    
	
    switch(m)
    {
    	case 1:
                printf("\nEven numbers: ");
                for (i = 0; i <=9; i++) 
	            {
                  if (a[i] % 2 == 0) 
        	    	{
                      printf("%d ", a[i]);
                    }
                }

                printf("\nOdd numbers: ");
                for (i = 0; i <=9; i++) 
               	{
                   if (a[i] % 2 != 0) 
	             	{
                       printf("%d ",a[i]);
                    }
                } 
        break;
		case 2:
    count = 0;
    for (i = 0; i <= 9; i++) 
	{
        count = 0;
        for (j = 1; j <= a[i]; j++) 
		{
            if (a[i] % j == 0) 
			{
                count++;
            }
        }
        if (count == 2) 
		{
            printf("The Prime number is: %d\n", a[i]);
        }
    }
    break;
		        
		       case 3:
		       	
		       	for(i=0;i<=9;i++)
                	{
                		if(a[i]<lt)
                    		
                    			lt=a[i];
	                    	
                   	}
                        	printf("The lowest number is:%d",lt);
                        	break;
                
				case 4:
				printf("Thanks for your time\n");
				exit(0);
				
				default:
				printf("Invalid input, Please Enter Again");        
   }
}
            while(m!=4);
 




    return 0;
}

