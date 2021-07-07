// Alex has been preparing a box for handicraft. The box consists of N pieces of stones with each stone having a certain weight assigned to it. 
//Each stone in the box will carry a different weight. This means no two stones can have the same weight.
//Input
//3
//2
//2
//4
//Output
//9

#include <stdio.h>

int main()

{

        int n;

        scanf("%d",&n);

        int weight[n];

        int i, sum = 0, count = 0;

        for(i=0; i<n; i++)

        {

                    scanf("%d",&weight[i]);

        }

        for(i=0; i<n; i++)

        {

            if(weight[i]!=0)

            count++;

        }

        if(count==n)

        {

            for(i=0; i<n; i++)

            {

                if(weight[i]==weight[i+1])

                {

                    weight[i+1]++;

                }

                sum = sum + weight[i];

            }

            printf("%d",sum);

        }

        else

        {

                   printf("Wrong Input");

        }

        return 0;

}

