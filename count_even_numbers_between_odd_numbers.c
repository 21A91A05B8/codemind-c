#include<stdio.h>
int main()
{
    int arr[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i+1]%2!=0 && arr[i-1]%2!=0  && arr[i]%2==0)
        {
            c++;
        }
    }
    printf("%d",c);
}