#include<stdio.h>
int main()
{
    int arr[100],n,min,i,sum=0;
    float avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        avg=(sum)/n;
    }
    
    for(i=0;i<n;i++)
    {
        if(avg==arr[i])
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
    
    

}