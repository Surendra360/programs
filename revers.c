#include<stdio.h>
int main()
{
    int n,rem,y=0,x;
    printf("enter a num:");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        rem=n%10;
      y=y*10+rem;
        n=n/10;

    }
    if(x==y)
        printf("%d is equal to %d",x,y);
    else
        printf("%d is not equal to %d",x,y);

    return 0;
}
