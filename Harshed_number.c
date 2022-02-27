#include<stdio.h>
int main()
{
    int N,K,d,sum=0;
    scanf("%d",&N);
    K=N;
    while(N>0)
    {
        d=N%10;
        N=N/10;
        sum=sum+d;
    }
    if(K%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}