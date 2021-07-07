//Display sequence of Fibonacci series until the number given by user and count 
//total even number and odd numbers in that series expect zero.


#include <stdio.h>

int main()

{

        int num;

        int a=1, b=1, c;

        int odd = 2, even = 0;

        int i;

        scanf("%d",&num);

        if(num>=5 && num<=20)

        {

            printf("%d %d ",a,b);

            for(i=1; i<=num-2; i++)

            {

                c = a + b;

                a = b;

                b = c;

                printf("%d ",c);

                if(c%2==0)

                {

                    even++;

                }

                else

                {

                    odd++;

                }

            }

            printf("\n%d\n%d",even,odd);

        }

        else

        {

                    printf("INVALID INPUT");

        }

        return 0;    

}

