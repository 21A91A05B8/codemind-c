#include<stdio.h>
int main()

{
    int n,i,temp,d,rev=0;
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    if(rev==temp)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}