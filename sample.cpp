#include <stdio.h>
#include <stdlib.h>

int main() {
    int day;

    while (1) {  // Infinite loop
        // Input
        printf("Enter a number (1-7) or 0 to exit: ");
        scanf("%d", &day);

        if (day == 0) {
            printf("Exiting the program.\n");
            break;  // Exit the loop
        }

        // Switch case
        switch (day) {
            case 1:
                printf("Sunday\n");
                break;
            case 2:
                printf("Monday\n");
                break;
            case 3:
                printf("Tuesday\n");
                break;
            case 4:
                printf("Wednesday\n");
                break;
            case 5:
                printf("Thursday\n");
                break;
            case 6:
                printf("Friday\n");
                break;
            case 7:
                printf("Saturday\n");
                break;
            default:
                printf("Invalid input. Please enter a number between 1 and 7 or 0 to exit.\n");
        }
    }

    return 0;
}

