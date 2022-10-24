#include<stdio.h>
int main()
{
    int m,n,i,sum=0,c=0,j;
    scanf("%d",&m);//1
    scanf("%d",&n);//3
    for(i=m;i<=n;i++)
    {
        sum=0;
        for(j=i;j<=n;j++)
        {
            sum=sum+j;
            if(sum%2!=0)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}