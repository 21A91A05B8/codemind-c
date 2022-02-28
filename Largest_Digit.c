#include<stdio.h>
int main()
{
    int n,d,s,l=0;
    scanf("%d",&n);
    while(n)//9453
    {
        d=n%10;
        if(l<d)
        {
        	l=d;
        }
        n=n/10;
	}
    printf("%d",l);
}    
	
