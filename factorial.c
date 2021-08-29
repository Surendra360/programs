#include<stdio.h>
int main()
{
    int n,fact;
    printf("enter a num:");
    scanf("%d",&n);
    fact=1;
    while(n>0)
    {
        fact=fact*n;
        n--;

    }
    printf("factorial is %d",fact);
    return 0;
}
