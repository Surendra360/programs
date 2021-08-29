#include<stdio.h>
int main()
{
    int n,rem,y=0,x;
    printf("enter any number:");
    scanf("%d",&n);
    x=n;
    while(n>0)
    {
        rem=n%10;
      y=y*10+rem;
        n=n/10;

    }
   printf("reverse of given number is %d",y);
    return 0;
}
