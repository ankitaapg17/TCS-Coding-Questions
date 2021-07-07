//Sum of prime numbers in a given range
#include <stdio.h>
#include <stdlib.h>

int check(int l)//check
{
	int j;
	for(j=2;j<l;j++)
	{
		if(l%j==0)
		{
			return 0;
		}
		else
		return 1;
	}
	
	
}


int main()
{
	
	int i,k,n;
	int sum=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		k=check(i);
		if(k==1)
		{
			sum=sum+i;
		}		
	}
	printf("%d",sum);	
	}
	
	
	
	





