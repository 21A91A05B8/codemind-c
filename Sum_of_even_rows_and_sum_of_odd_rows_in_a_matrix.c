#include<stdio.h>
int main()
{
    int arr[100][100],i,j,m,n,s1=0,s2=0;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+1)%2==0)
            {
                s1=s1+arr[i][j];
            }
            else if((i+1)%2!=0)
            {
                s2=s2+arr[i][j];
            }
        }
        
    }
    printf("%d %d",s2,s1);
    


}