#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char str[16][20]={"break", "case", "continue", "default", "defer", "else","for", 
    "func", "goto", "if", "map", "range", "return", "struct", "type", "var"};
    //2 D array of characters
    
    char input[20];
    int flag=0;
    scanf("%s",input);
    for(i=0;i<16;i++)
    {
    	if(strcmp(input,str[i])==0)
    	{
    		flag=1;
    		break;
		}
	}
	if(flag==1)
	{
		printf("Yes a keyword");
	}
	else
	{
		printf("Not a keyword");
	}
	
	
	
}
