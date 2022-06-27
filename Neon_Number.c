#include<stdio.h>
#include<math.h>
int main()
{
    int n,sqr,d,sum=0;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr!=0)
    {
        d=sqr%10;
        sum=sum+d;
        sqr=sqr/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}