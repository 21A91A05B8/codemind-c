#include<stdio.h>
int  main()
{
    int s1=0,arr[100],n,s2,diff,i;
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
    diff=s2-s1;
    printf("%d",diff);
    
}