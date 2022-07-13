#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if(num%3==0)
    {
        printf("Pling");
    }
    if(num%5==0)
    {
        printf("Plang");
    }
    if(num%7==0)
    {
        printf("Plong");
    }
    if(num%3!=0 && num%5!=0 && num%7!=0)
    {
        printf("%d",num);
    }
}