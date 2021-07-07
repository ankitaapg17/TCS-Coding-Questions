//Coordinate Geometry
//He first travels and covers 10m distance
//His second turn is upwards and covers 20 units
//His third turn is to the left 30 units
//His fourth turn is downward for 40 units
//fifth turn is to the right again for 50 units
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char c='R';
	int x=0, y=0,n;
	int distance;
	scanf("%d",&n);
	
	while(n)
	{
		switch(c)
		{
			case 'R':
				x=x+distance;
				distance=distance+10;
				c='U';
				break;
			case 'U':
			    y=y+distance;
				distance=distance+10;
				c='L';
				break;
			case 'L':
			    x=x-distance;
				distance=distance+10;
				c='D';
				break;
			case 'D':
			    y=y-distance;
				distance=distance+10;
				c='A';
				break;
			case 'A':
			    x=x+distance;
				distance=distance+10;
				c='R';
				break;				
		}
		n--;
	}
	printf("%d %d",x,y);
	
	
}
