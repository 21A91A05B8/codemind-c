#include<stdio.h>
int main()
{
    int n,arr[100],i,c,j;
    float sum=0,k=0;
    scanf("%d",&n);//5
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//1 2 3 4 5
        
    }
    for(i=0;i<n;i++)//1<5
    {
        c=0;
        for(j=0;j<n;j++)//0<5
        {
            if(arr[i]==arr[j])//arr[1]=arr[0]
            {
                c++;//c=1
                if(i!=j)
                {
                    arr[j]=0;
                }
            }
        }
    
        if(arr[i]==c)//arr[0]==1
        {
            sum+=arr[i];//sum=1
            k++;
         }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        printf("%.2f",sum/k);
    }
}