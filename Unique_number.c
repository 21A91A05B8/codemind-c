#include<stdio.h>
int main()
{
    int n,temp,i,j,d,k,c=1,arr[100];
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        d=n%10;
        arr[k]=d;
        n=n/10;
        k++;
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(arr[i]==arr[j])
            {
                c=0;
            }
        }
    }
    if(c==1)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}