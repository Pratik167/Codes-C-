#include <stdio.h>
int test(int *);
int main() 
{
    int result = 0, n = 5;
    result = test(&n);
    printf("\n Final: %d", result);
    printf("\n Fina n: %d", n);
    return 0;
}

int test(int *t) 
{
    (*t)++;
    return *t;
}

