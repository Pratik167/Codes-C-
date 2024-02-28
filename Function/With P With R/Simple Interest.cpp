#include <stdio.h>
float SimpleInterest(float, float, float);
int main() 
{
    float principal, rate, time, interest;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest by calling the function
    interest=SimpleInterest(principal, rate, time);

    // Output the result
    printf("Simple Interest = %.2f\n",interest);

    return 0;
}
float SimpleInterest(float p, float r, float t)
{
    float SI;
    SI=(p * r * t) / 100;
    return SI;
}
