#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,k,t;
    scanf("%d%d%d",&x,&y,&m);
    k=pow(x,y);
    t=k%m;
    printf("%d",t);
}