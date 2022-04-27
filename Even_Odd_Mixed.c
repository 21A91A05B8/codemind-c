#include<stdio.h>
int main()
{
    int n,i,r,c=0,l=0,m=0,k=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        c++;
        n=n/10;
        if(r%2==0)
        l++;
        else if(r%2!=0)
        m++;
        else
        k++;
        
        
    }
    if(c==l)
    {
        printf("Even");
        
    }
    else if(c==m)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}