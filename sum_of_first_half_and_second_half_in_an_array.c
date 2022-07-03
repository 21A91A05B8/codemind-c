#include<stdio.h>
int main()
{
    int n,arr[100],i,j,s1=0,s2=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n/2;i++)
    {
        s1=s1+arr[i];
    }
    for(i=n/2;i<n;i++)
    {
        s2=s2+arr[i];
    }
    printf("%d
%d",s1,s2);
    
}