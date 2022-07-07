#include<stdio.h>
int main()
{
    int n,min=100,c=0,sum=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int A,B;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(arr[i]>=A && arr[i]<=B)
        {
            if(min>arr[i])
            {
                sum=sum+arr[i];
            }
        }
    }
    printf("%d",sum);
}