//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    long long int S,D,i,sum;
    while(scanf("%lld%lld",&S,&D)!=EOF)
    {
        i=S;
        sum=0;
       while(1)
       {
           sum=sum+i;
           if(sum>=D)
           {
           printf("%lld\n",i);
           break;
           }
           i++;
       }
    }
    return 0;
}
