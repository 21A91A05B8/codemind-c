#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c=0,c1=0,c2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
        }
        if(a[i]==0)
        {
            c1++;
        }
    }
    c2=c+c1;
    if(c2==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
        