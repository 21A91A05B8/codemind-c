#include<stdio.h>
int is_prime(int n)
{
    int i,c1=0;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c1++;
        }
    }
    if(c1==0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,c=2,i;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            if(is_prime(i))
            {
                i++;
                continue;
            }
            else
            {
                c++;
            }
        }
    }
    printf("%d",c);
}