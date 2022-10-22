#include<stdio.h>
int main()
{
    int n,arr[100],i,tw,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    scanf("%d",&tw);
    for(i=0;i<n;i++)
    {
        if(arr[i]<=tw)
        {
            sum=sum+1;
        }
        else
        {
            sum=sum+2;
        }
    }
    printf("%d",sum);
}