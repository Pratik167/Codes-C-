#include <stdio.h>
void SimpleInterest();
int main() 
{
    float interest;
    // Calculate simple interest by calling the function
    SimpleInterest();
    
    return 0;
}
void SimpleInterest()
{
	// Input principal amount, rate of interest, and time period
	float principal, rate, time;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);
    float SI;
    SI=(principal * rate * time) / 100;
    printf("%.2f",SI);
}
