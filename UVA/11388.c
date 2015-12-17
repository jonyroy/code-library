//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long int n,m,T;
    scanf("%ld",&T);
    while(T--)
    {
        scanf("%ld%ld",&n,&m);
        if(m%n==0)
        printf("%ld %ld\n",n,m);
        else
        printf("-1\n");
    }
    return 0;
}
