//Prime number with twist
//Write a code to check whether no is prime or not. Condition use function check() 
//to find whether entered no is positive or negative ,if negative then enter the no, 
//And if yes pas no as a parameter to prime() and check whether no is prime or not?

#include<stdio.h>
void prime(int n)
{
int c=0,i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c = c+1;
    }
    if(c>=1)
        printf("%d is not a prime number",n);
    else
        printf("%d is a prime number",n);
}
void main()
{
int n;
printf("Enter no : "); //enter the number
scanf("%d",&n);
if(n<0)
    {
    printf("Please enter a positive integer");
    }
else
    prime(n);
}
