//Monkey problem







#include <stdio.h>
int main()
{
    int n,k,j,m,p;
    float atebanana=0.0,atepeanut=0.0;
    scanf("%d %d %d %d %d",&n,&k,&j,&m,&p);
    if(n<0 || k<0 || j<0 || m<0 || p<0)
    {
        printf("INVALID INPUT");
    }
    else
    {
        if(k>0)
            atebanana =(float)m/k;
        if(j>0)
            atepeanut =(float) p/j;
        n=n-atebanana-atepeanut;
        printf("Number of Monkeys left on the Tree:%d",n);
    }
    return 0;
}













