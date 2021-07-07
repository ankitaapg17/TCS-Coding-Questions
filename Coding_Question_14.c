//GCD of two numbers
//Binary to decimal
//Armstrong
//Fibonacci sequence
#include<stdio.h>
int main()
{
      //To initialize variables 
      int n1=0,n2=1,n3,limit,i;

      //To take user input
      printf("enter a limit of series \n");
      scanf( "%d",&limit);

      printf("Fibonacci series %d %d ",n1,n2);

      //To use this loop for given length
      for(i=2;i<limit;i++)
      {
           //n1 and n2 sum  store in new variable n3
           n3=n1+n2;   
           n1=n2;
           n2=n3;
         //display serious 
          printf("%d ",n3);
      }
     return 0;
}




//Pallindrome number
//Decimal to Binary
//Binary to Octal
//Decimal to Octal
//String Pallindrome
//Reverse of a number
//Square root without using math.h
//To check if given alphabet is vowel or not

#include <stdio.h>
int main ()
{
    char ch;
   // Get the character char ch;
  scanf ("%c", &ch);
  if (ch >= 'A' && ch <= 'Z')
    {
      ch = 'a' + (ch - 'A');
    }
  if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
      printf ("Vowel");
    }
  else
    {
      printf ("Consonant");
    }
  return 0;
}


//To change the case of alphabet and print
//Given an array and a number (say s), find whether any two elements in the array whose sum is “s”:
//Write a program to find the most occurring character in the string.

//Longest common subsequence
//Given two sequences, find the length of longest subsequence present in both of them.


//Substring problem in C
//We need to write a program that will print all non-empty substrings of that given string.


//Pythogorous triplets
//A Pythagorean triplet is a set of three integers a, b and c such that a
//Given a limit, generate all Pythagorean Triples with values smaller than given limit.


//The square root of a Prime number by checking first if it is a prime number

//Decimal to Octal
//Binary to Octal

//GCD of three numbers or array of numbers

//Sum of odd numbers in a given range

//READ a file


//Write a function that accepts 2 strings search string and pattern string and returns TRUE if the pattern string is
//found in the search string and FALSE if the pattern string is not found in the search string.


//K'th largest element in a given array
//Given an array and a number k where k is smaller than size of array, we need to find
//the k’th smallest element in the given array. It is given that ll array elements are distinct.


