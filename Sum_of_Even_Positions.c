#include<stdio.h>
int main()
{
    int n,i,arr[100],s1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s1=s1+arr[i];
        }
    }
    printf("%d",s1);
}