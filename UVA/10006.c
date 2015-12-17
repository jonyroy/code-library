#include<stdio.h>
#include<math.h>
int main()
{
    long int n;
    while(scanf("%ld",&n))
    {
        if(n==0)
        break;
        if(n==561||n==1105||n==1729||n==2465||n==2821)
        printf("The number %ld is a Carmichael number.\n",n);
        else if(n==6601||n==8911||n==10585||n==15841||n==29341)
        printf("The number %ld is a Carmichael number.\n",n);
        else if(n==41041||n==46657||n==52633||n==62745||n==63973)
        printf("The number %ld is a Carmichael number.\n",n);
        else
        printf("%ld is normal.\n",n);
    }
    return 0;
}
