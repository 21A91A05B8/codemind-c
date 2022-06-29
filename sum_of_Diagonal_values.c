#include<stdio.h>
int main()
{
    int n,arr[100][100],i,j,r,c,sum=0,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||i+j==n-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    
            printf("%d",sum);


}