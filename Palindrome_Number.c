#include<stdio.h>
int main()
{
    int n,i,arr[100],s,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        t=arr[i];
        s=0;
        while(t>0)
        {
            s=s*10+t%10;
            t=t/10;
        }
        if(s==arr[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}