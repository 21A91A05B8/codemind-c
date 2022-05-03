#include<stdio.h>
int main()
{
    int n,i,arr[100],s1,s2,sub;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1+=arr[i];
        }
        else
        {
            s2=s2+arr[i];
        }
    }
    if(s1>s2)
    {
        sub=s1-s2;
    }
    else if(s2>s1)
    {
        sub=s2-s1;
    }
    printf("%d",sub);
}