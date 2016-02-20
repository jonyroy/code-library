/*
* Author: Jony Roy
* Date:02-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
long int primeNumber[664580];
bool cPrime[10000000];
int PrimeFinder()
{
    for(long int i=1;i<=10000000;i++)
        cPrime[i]=true;
    long int n=(long int)sqrt((double)10000000);
    for(long int i=3;i<=n;i+=2)
    {
        if(cPrime[i])
        {
            for(long int j=i*i;j<=10000000;j+=i)
                cPrime[j]=false;
        }
    }
    long int j=0;
    for(long int i=3;i<=10000000;i+=2)
        if(cPrime[i]==true)
        primeNumber[++j]=i;
     return j;
}
int main()
{
    int TestCase;
    long int PrimeCounter=PrimeFinder();
    scanf("%d",&TestCase);
    for(int i=1;i<=TestCase;i++)
    {
        long long int N,M=1;
        scanf("%lld",&N);
        while(N%2==0)
            N=N/2;
        for(long int j=1;j<=PrimeCounter;j++)
        {
            if(N==1)
            break;
            int cc=0;
            while(N%primeNumber[j]==0)
            {
               N=N/primeNumber[j];
               cc++;
            }
            if(cc)
            M=M*(cc+1);
        }
        if(N>1)
        M=M*2;
        M--;
        printf("Case %d: %lld\n",i,M);
    }
    return 0;
}
