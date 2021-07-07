//Using a method, pass two variables and find the sum of two numbers.

#include<stdio.h>
#include<string.h>
int main()
    {
        int x;float y;
        scanf("%d%f",&x,&y);
        if(isnan(x) || isnan(y))
          {
            printf("Error");
          }
         else
            printf("%0.2f",(float)x+y);
        return 0;
    }
