//Food court menu order
#include <stdio.h>

int main()

{

    float price[10] = {80.0, 130.0, 100.0, 80.0, 90.0, 110.0, 120.0, 140.0, 70.0, 80.0};

    float total = 0;

    int num, quantity;

    char choice;

    int i;

    start:

    scanf("%d",&num);

    scanf("%d",&quantity);

    if(quantity<0 || quantity>21)

    {

        printf("INVALID INPUT");

    }

    else

    {

        for(i=0; i<10; i++)

        {

            if(num==i+1)

            {

                total = total + (price[i] * quantity);

            }

        }

        scanf(" %c",&choice);

        if(choice=='y' || choice=='Y')

        {

            goto start;

        }

        else if(choice=='n' || choice == 'N')

        {

            printf("Total Amount : %.1f INR",total);

        }

        else

        {

            printf("INVALID INPUT");

        }

    }

    return 0;

}
