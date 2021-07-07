////Take a single line text message from user. Separate the vowels from the text. Find the repeating occurrences of vowels from the text message.
//
//Display count of which vowels has repeated how many times.
//
//Display a new text message by removing the vowels characters as output.
//
//Display the output in the exact format shown below in example, after displaying count of characters on next lines display the new text message on next line.
//
//“Hll wlcm” is the next text message.
//
//If text message entered by user does not contain any vowels then display 0 as output.
//
//If text message entered by user contain any numeric value then display 0 as output.
//
//If user entered blank or empty text message display “INVALID INPUT” as output. Message “INVALID INPUT” is case sensitive. Display it in exact format given
//
//
//Example 1:
//
//Input:
//
//Hello welcome
//
//Output
//
//a : 0
//
//e : 3
//
// i : 0
//
//o : 2
//
//u : 0
//
//Hll wlcm
//


#include <stdio.h>

#include <ctype.h>

int main()

{

    char str[100];

    char vowels[5] = {'a','e','i','o','u'};

    char count[5] = {0};

    int i=0, j, flag=0, numeric=0;

    scanf("%[^\n]s",str);

    if(str[0]=='\0')

    {

        printf("INVALID INPUT");

    }

    else

    {

        while(str[i]!='\0')

        {

            if(str[i]>=48 && str[i]<=57)

            {

                numeric++;

            }

            i++;

        }

        i=0;

        while(str[i]!='\0')

        {  

            for(j=0; j<5; j++)

            {

                if(str[i]==vowels[j] || str[i]==toupper(vowels[j]))

                {

                    flag++;

                }

            }

            i++;

        }

        if(numeric!=0 || flag==0)

        {

            printf("0");

        }

        else

        {

            i=0;

            while(str[i]!='\0')

            {

                for(j=0; j<5; j++)

                {

                    if(str[i]==vowels[j] || str[i]==toupper(vowels[j]))

                    {

                        count[j]++;

                    }

                }

                i++;

            }

            for(i=0;i<5;i++)

            {

                printf("%c : %d\n",vowels[i],count[i]);

            }

            i=0;

            while(str[i]!='\0')

            {

                flag = 0;

                for(j=0; j<5; j++)

                {

                    if(str[i]==vowels[j] || str[i]==toupper(vowels[j]))

                    {

                        flag++;

                    }

                }

                if(flag==0)

                {

                    printf("%c",str[i]);

                }

                i++;

            }

        }

    }

    return 0;

}


























