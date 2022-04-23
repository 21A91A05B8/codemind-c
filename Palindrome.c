#include<stdio.h>
int main()
{
    int d,N,rev=0,temp;
    scanf("%d",&N);
    temp=N;
    while(N)
    {
        d=N%10;
        N=N/10;
        rev=rev*10+d;
    }
    if(temp==rev)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}