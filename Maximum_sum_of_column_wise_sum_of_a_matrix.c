#include<stdio.h>
int main()
{
    int r,c,max=0;
    scanf("%d%d",&r,&c);
    int a[r][c],i,j,sum;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<c;j++)
    {
        sum=0;
        
        for(i=0;i<r;i++)
        {
            sum=sum+a[i][j];
        }
    
        if(max<sum)
        {
            max=sum;
         }
    }
    printf("%d",max);

    
}
 