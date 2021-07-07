//Find frequency of each element in array






#include <stdio.h>
int main()
{
	int arr[]={1,2,8,3,2,2,2,5,1};
	
	int length=sizeof(arr)/sizeof(arr[0]);
	int freq[length]; //This array will store frequency of each element
	
	int visited=-1;
	int i,j,count;
	
	for(i=0;i<length;i++)
	{
		count=1;
		for(j=i+1;j<length;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=visited; //To avoid counting same element again
			}
		}
	}
	if(freq[i]!=visited)
	{
		freq[i]=count;
	}
	
	//Display frequency of each element present
	for(i=0;i<length;i++)
	{
		printf("%d\n",freq[i]);
	}
}









