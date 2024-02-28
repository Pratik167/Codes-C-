#include <stdio.h>
int sum (int *, int *);
int main() 
{
    int result = 0, n = 0,m=0;
    printf("\n Enter First Num");
    scanf("%d",&n);
    printf("\n Enter Second Num");
    scanf("%d",&m);
    result=sum(&n,&m);
    printf("\n the sum:%d",result);

    return 0;
}

int sum(int *p,int *q) 
{
    int r=0;
    r=(*p + *q);
    return r;
}

