#include<stdio.h>
int main()
{
    int n,arr[100],i,c,j,temp,s=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);//1 2 3 4 5 6 2
    }
    for(i=0;i<n;i++)//i=1<7
    {
        c=0;//c=0
        for(j=0;j<n;j++)//j=0<7
        {
            if(arr[i]==arr[j])//a[1]=a[0]
            {
                c++;//c=1
                if(i!=j)
                {
                	arr[j]=0;
				}
            }
        }
        if(arr[i]!=0)
        {
            printf("%d %d ",arr[i],c);
        }
    }
}