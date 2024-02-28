#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int prime = 1;  // Assume prime by default

    if (num < 2) {
        prime = 0;   // Not a prime number
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                prime = 0;  // Not a prime number
                break;
            }
        }
    }

    return prime;
}

int main() {
    int lowerLimit = 500;
    int upperLimit = 1500;
    int countPrimes = 0;

    printf("Prime numbers between %d and %d are:\n", lowerLimit, upperLimit);

    for (int i = lowerLimit; i <= upperLimit; i++) {
        if (isPrime(i)) {
            printf("%d\n", i);
            countPrimes++;
        }
    }

    printf("\nTotal prime numbers between %d and %d: %d\n", lowerLimit, upperLimit, countPrimes);

    return 0;
}

