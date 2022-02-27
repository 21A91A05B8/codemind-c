#include<stdio.h>
int main()
{
    int m,n,i,hcf=1,min;
    scanf("%d%d",&m,&n);
    min=m>n?n:m;
    for(i=2;i<=min;i++)
    {
        if(m%i==0 && n%i==0)
        {
            hcf=i;
        }
    }
    printf("%d",hcf);
}