#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,c,j,k=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//1 2 3 4 5 6 2
    }
    for(i=0;i<n;i++)//i=1<7
    {
        c=0;//c=0
        for(j=0;j<n;j++)//j=0<7
        {
            if(a[i]==a[j])//a[1]=a[0]
            {
                c++;//c=1
                if(i!=j)
                {
                	a[j]=0;
				}
            }
        }
        if(a[i]==c)//a[0]=1
        {
            k++;
        }
    }
    printf("%d",k);
}
