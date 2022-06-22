#include<stdio.h>
int main()
{
    int n,s,t,i,c=0;
    scanf("%d",&n);//2
    for(i=0;i<n;i++)//i=1<2
    {
        scanf("%d%d",&s,&t);
    	c=0;
    	while(s<=t)
    	{
    		if(s%10==2 || s%10==3 || s%10==9)
    	    {
    			c++;
			}
			s++;
		}
    
		printf("%d
",c);
    }
	
}

