//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int n,i,j,p;
    while(scanf("%lld",&n))
    {
        if(n<0)
        break;
        p=1;
        for(i=2;i<=(sqrt(n));)
        {
            while(n%i==0)
            {
                printf("    %-lld\n",i);
                n/=i;
            }
            if(p>1)
            i+=2;
            else
            i++;
            p++;
        }
        if(n>1)
        printf("    %-lld\n",n);
        printf("\n");
    }
    return 0;
}
