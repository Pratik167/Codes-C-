#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu, a;
    float P, T, R, nrs, usd, SI;

    while (1) {
        printf("\t\t\t\t\t\t\tMenu\t\t\t\t\n");
        printf("\t\t\t\t1. Calculate Simple Interest\t\t\t\t\n");
        printf("\t\t\t\t2. Dollar To Nepali\t\t\t\t\n");
        printf("\t\t\t\t3. Check Even Or Odd\t\t\t\t\n");
        printf("\t\t\t\t4. Exit\t\t\t\t\n");
        printf("\t\t\t\tEnter a number between 1 and 4: ");
        scanf("%d", &menu);

        switch (menu) {
            case 1:
                printf("Enter P, T, R:\n");
                scanf("%f %f %f", &P, &T, &R);
                SI = (P * T * R) / 100;
                printf("Simple Interest = %f\n", SI);
                break;

            case 2:
                printf("Enter the Dollar Amount:\n");
                scanf("%f", &usd);
                nrs = usd * 133;
                printf("%.2f USD = %.2f NPR\n", usd, nrs);
                break;

            case 3:
                printf("Enter your number:\n");
                scanf("%d", &a);
                if (a % 2 == 0)
                    printf("The number is Even\n");
                else
                    printf("The number is Odd\n");
                break;

            case 4:
                printf("Thanks for your time\n");
                exit(0);

            default:
                printf("Invalid input. Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}
