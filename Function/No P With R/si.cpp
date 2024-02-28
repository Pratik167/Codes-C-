#include <stdio.h>
float SimpleInterest();
int main() 
{
    float interest;
    // Calculate simple interest by calling the function
    interest=SimpleInterest();
    // Output the result
    printf("Simple Interest = %.2f\n",interest);
    
    return 0;
}
float SimpleInterest()
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
    return SI;
}
