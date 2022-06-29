#include<stdio.h>
int main()
{
    int n,i,j,arr[100][100],m,sum=0,r,c;
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
            sum=sum+arr[i][j];
        }
    }
    printf("%d",sum);
}