//Matthieu is an expert in Mathematics. He is performing arithmetic operations 
//and wants to find all the divisors of P number.

#include <stdio.h>

int main()

{

        int num, i;

        scanf("%d",&num);

        if(num<0)

        {

                    printf("Wrong Input");

        }

        else

        {

            for(i=1; i<=num; i++)

            {

                if(num%i==0)

                {

                    printf("%d ",i);

                }

            }

        }

        return 0;

}




