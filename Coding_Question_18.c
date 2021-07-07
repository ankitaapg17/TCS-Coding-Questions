//Ceaser cipher
#include <stdio.h>
#include <string.h>
int main()
{
	int key,i;
	char data[30];
	printf("\nEnter the plain text:");
	scanf("%[^\n]s",data);
	//gets(data);
	printf("\nEnter the key value:");
	scanf("%d",&key);
	for(i=0;i<strlen(data);i++)
	{
		
		if(data[i]>='x')
		{
			data[i]=data[i]-26;
		}
		data[i]=data[i]+key;
	}
	printf("The encrypted text:%s",data);
	
	
	
	
	
}
