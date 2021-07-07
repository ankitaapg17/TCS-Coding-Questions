//1 1 2 3 4 9 8 27 16 81 32 243 64
#include <stdio.h>
int main()
{
	int a=1;
	int b=1;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			if(i==1)
			a=1;
			else
			{
				a=a*2;
			}
		}
		else
		{
			if(i==2)
			b=1;
			else
			{
				b=b*3;
			}
		}
	}
	if(n%2!=0)
	{
		printf("%d",a);
	}
	else
	{
		printf("%d",b);
	}
	
	
	
}
