#include<stdio.h>
int main()
{
    int n,k,c=0,t,d,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=n-1;i++)
    {
        c=0;
        t=a[i];
        
        while(t!=0)
        {
            c++;
            d=t%10;
            t=t/10;
        }
        if(a[i]==0)
        {
            c=1;
        
        }
        printf("%d ",c);
    }
}