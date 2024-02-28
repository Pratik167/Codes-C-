#include <stdio.h>
void SimpleInterest(float, float, float);
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
    SimpleInterest(principal, rate, time);
    return 0;
}
void SimpleInterest(float principal, float rate, float time)
{
    float SI;
    SI=(principal * rate * time) / 100;
    printf("%.2f",SI);
}
