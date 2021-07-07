//Given a maximum of 100 digit numbers as input, find the difference between the sum of odd and even position digits

#include <stdio.h>
#include <string.h>//check
int main()
{
	
	
	int i,j;
	char a[100];
	int even=0,odd=0;
	
	scanf("%s",&a);
	for(i=0;i<strlen(a);i++)
	{
		if(i%2==0)
		{
			even=even+a[i];
		}
		else
		{
			odd=odd+a[i];
		}
	}
	
	printf("%d",abs(even-odd));
	
}
