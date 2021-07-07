//Fully automatic vending machine


#include <stdio.h>
int main()
{

    char c[3][20]={"Espresso Coffee","Cappuccino Coffee","Latte Coffee"};
    char t[8][30]={"Plain Tea","Assam Tea","Ginger Tea","Cardamom Tea","Masala Tea","Lemon Tea","Green Tea","Organic Darjeeling Tea"};
    
    char s[4][20]={"Hot and Sour Soup","Veg Corn Soup","Tomato Soup","Spicy Tomato Soup"};

    char b[3][20]={"Hot Chocolate Drink","Badam Drink","Badam-Pista Drink"};
    char str[]="Welcome to CCD!\nEnjoy your ";
    char ch;
    int  item, i;

    scanf("%c",&ch);
    scanf("%d",&item);

    if(ch=='c')

    {

        for(i=0; i<3; i++)

        {

            if(item==i+1)

            {

                printf("Welcome to CCD!\nEnjoy your %s!",c[i]);

                break;

            }

        }

        if(i==3)

        {

            printf("INVALID OPTION!");

        }

    }

    else if(ch=='t')

    {

        for(i=0; i<8; i++)

        {

            if(item==i+1)

            {

                printf("Welcome to CCD!\nEnjoy your %s!",t[i]);

                break;

            }

        }

        if(i==8)

        {

            printf("INVALID OPTION!");

        }

    }

    else if(ch=='s')

    {

        for(i=0; i<4; i++)

        {

            if(item==i+1)

            {

                printf("Welcome to CCD!\nEnjoy your %s!",s[i]);

                break;

            }

        }

        if(i==4)

        {

            printf("INVALID OPTION!");

        }

    }

    else if(ch=='b')

    {

        for(i=0; i<3; i++)

        {

            if(item==i+1)

            {

                printf("Welcome to CCD!\nEnjoy your %s!",b[i]);

                break;

            }

        }

        if(i==3)

        {

            printf("INVALID OPTION!");

        }

    }

    else

    {

        printf("INVALID INPUT!");

    }

    return 0;

}








