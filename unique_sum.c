#include<stdio.h>
int main()
{
    int n,arr[100],sum=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==i)
            {
                sum=sum+arr[i];
            }
            if(arr[i]==arr[j])
            {
                break;
            }
        }
    }
    printf("%d",sum);
}