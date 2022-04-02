#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int n,r,temp,n1,n2,i=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    temp=n;
    while(n!=0)
    {
        n=n/10;
        i=i+1;
        }
        while(n1!=0)
        {
         n2=n1%10;
         r=r+pow(n2,i);
         n1=n1/10;
        }
        if(r==temp)
            printf("%d is Armstrong number",temp);
        else
            printf("%d not a Armstrong number",temp);
        return 0;
}
