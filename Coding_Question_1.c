//Print the following pattern
//0 0 2 1 4 2 6 3 8 4
#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			if(i>2)
			a=a+2;
		}
		else
		{
			b=a/2;
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
