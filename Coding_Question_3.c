//To take 3 words as input
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10],b[10],c[10];
	int i,j;
	int x,y,z;
	gets(a);
	gets(b);
	gets(c);
	x=strlen(a);
	y=strlen(b);
	for(i=0;i<x;i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			a[i]='%';
		}
	}
	for(j=0;j<y;j++)
	{
		if(b[j]=='b'||b[j]=='c'||b[j]=='d'||b[j]=='f'||b[j]=='g'||b[j]=='h'||b[j]=='j'||b[j]=='k')
		{
			b[j]='#';
		}
	}
	z=0;
	while(z!='\0')
	{
		if(c[z]>='a' && c[z]<='z')
		{
		c[z]=c[z]-32;
	    }
	    z++;
	}
	printf("%s%s%s",a,b,c);
}
