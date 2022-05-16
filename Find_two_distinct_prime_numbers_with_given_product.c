#include<stdio.h>
int main()
{
	int n,count=0,i,j,k,c=0,a[100],b[100];
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			b[k]=i;
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(b[i]*b[j]==n)
			{
				printf("%d %d",b[i],b[j]);
				c++;
				break;
			}
		}
	}
	if(c==0)
	{
		printf("-1");
	}
}