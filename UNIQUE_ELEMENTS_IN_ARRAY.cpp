//Printing Unique Elements in an Array
//Write a program to print all the unique elements
//in the given array.


#include <stdio.h>
#define MAX_SIZE 50
int main()
{
	 int a[MAX_SIZE], freq[MAX_SIZE];
	 int size, i, j, count;
	 printf ("Enter length of array: ");
	 scanf ("%d", &size);
	 printf ("Enter elements of the array array: ");
	 
	 for (i = 0; i < size; i++)
	 {
		 scanf ("%d", &a[i]);
		 freq[i] = -1; //initialising frequency array
	 }
	 
	 for (i = 0; i < size; i++)//Find frequency of each element
	 {
		 count = 1;
		 for (j = i + 1; j < size; j++)
		 {
			 if (a[i] == a[j])
			 {
			 count++;
			 freq[j] = 0;
		     }
	     }
		 if (freq[i] != 0)
		 {
		 	freq[i] = count;
		 }
	 }
	 printf ("\nUnique elements in the array are:\n");
	 for (i = 0; i < size; i++)
	 {
//		 if (freq[i] == 1) //print the elements having frequency one
//		 {
//		 
//		   printf ("%d ", a[i]);
//		 }
         if(freq[i]!=0)
         {
         printf("%d\n",freq[i]);
         }
	 }
	 return 0;
}







