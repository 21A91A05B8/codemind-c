#include<stdio.h>
int main()
{
    int i,n1,n2,f1=0,f2=0;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<n1;i++)
    {
        if(n1%i==0)
        {
            f1=f1+i;
        }
    }
    for(i=1;i<n2;i++)
    {
        if(n2%i==0)
        {
            f2=f2+i;
        }
    }
    if((n1==f2 )&& (n2==f1))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }

}