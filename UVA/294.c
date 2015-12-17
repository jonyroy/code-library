//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int n,i,j,k,l,L,H,T,max;
    long long int count,val;
    scanf("%lld",&T);
    while(T--)
    {
        max=-1;
        scanf("%lld%lld",&L,&H);
        for(i=L;i<=H;i++)
        {
            n=i;
            j=2;
            count=0;
            while(j<=(long)sqrt(n))
            {
                if(n%j==0)
                {
                   count++;
                   if((n/j)!=j)
                   count++;
                }
                j++;
            }
            if(i==1)
            count++;
            else
            count+=2;
            if(count>max)
            {
                max=count;
                val=i;
            }

        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",L,H,val,max);
    }
    return 0;
}
