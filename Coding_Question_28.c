//TV exchange offer
#include <stdio.h>

int main()

{

   int price[3] = {10000, 7000, 6000};

   int num, exchange, working;

   float discount;

   float total;

   scanf("%d",&num);

   if(num>=1 && num<=3)

   {

           scanf("%d",&exchange);

           if(exchange==1)

            {

               scanf("%d",&working);

               {

                   if(working == 1)

                   {

                               discount = (20*price[num-1])/100;

                               total = price[num-1] - discount;

                   }

                   else if(discount == 2)

                   {

                               discount = (2*price[num-1])/100;

                               total = price[num-1] - discount;

                   }

                   else

                   {

                               printf("INVALID INPUT");

                   }

               }

            }

            else if(exchange == 2)

            {

               total = price[num-1];

            }

            printf("%.1f INR",total);

   }

   else

   {

           printf("INVALID INPUT");

   }

   return 0;

}
