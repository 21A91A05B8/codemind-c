#include<stdio.h>
int main()
{
    int n,m,r,c,sum=0,sum1=0,arr[100][100],i,j;
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]%2==0)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j]%2!=0)
            {
                sum1=sum1+arr[i][j];
            }
        }
    }
    printf("%d %d",sum,sum1);
    
}