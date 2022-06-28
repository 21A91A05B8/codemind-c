#include<stdio.h>
int main()
{
    int N,M;
    scanf("%d%d",&N,&M);
    while(N!=M)
    {
        if(N>M)
        {
            N=N-M;
        }
        else
        {
            M=M-N;
        }
    }
    printf("%d",N);
}