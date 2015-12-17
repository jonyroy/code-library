#include<stdio.h>
#include<string.h>
int main()
{

    unsigned long long int n,a,b,i,F[100];
        F[0]=0;
        F[1]=1;
        for(i=2;i<=100;i++)
        {
            F[i]=F[i-1]+F[i-2];
        }
        while(scanf("%lld",&n)!=EOF)
        {
            printf("%lld\n",F[n]);
        }
    return 0;
}
