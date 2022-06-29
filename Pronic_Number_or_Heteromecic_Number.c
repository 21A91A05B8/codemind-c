#include<stdio.h>
#include<stdlib.h>
int main()
{
    int p,i,n,c=0;
    scanf("%d",&p);
    for(i=1;i<=p;i++)
    {
        if(i*(i+1)==p)
        {
            c=1;
        }
    }
    if(c==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}