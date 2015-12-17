//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    long int n,i,m,j,sum;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        scanf("%ld",&n);
        if(n==0)
        {
        printf("END OF OUTPUT\n");
        break;
        }
        sum=0;
        for(i=1;i<=n/2;i++)
        {
            if(n%i==0)
            sum=sum+i;
        }
        if(sum==n)
        printf("%5ld  PERFECT\n",n);
        else
        {
        if(sum>n)
        printf("%5ld  ABUNDANT\n",n);
        else
        printf("%5ld  DEFICIENT\n",n);
        }
    }
    return 0;
}
