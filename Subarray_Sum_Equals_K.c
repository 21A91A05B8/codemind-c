#include<stdio.h>
int main()
{
    int n,k,arr[100],i,c=0,j,sum=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)//
    {
        sum=0;
        for(j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum==k)
            {
                
                c++;//1
            }
        }
    }
    printf("%d",c);
}