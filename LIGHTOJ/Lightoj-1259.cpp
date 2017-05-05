/*
* Author: Jony Roy
* Date: 09-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
vector<lint> prime;
#define M 10000000
bitset<10000002> checkPrime;
lint primeFinder()
{
    prime.push_back(2);
    lint sq=sqrt(M);
    for(int i=3;i<=sq;i+=2)
    {
        if(!checkPrime[i])
        {
            for(int j=i*i;j<=M;j+=i)
                checkPrime[j]=1;
        }
    }
    for(int i=3;i<=M;i+=2)
    {
        if(!checkPrime[i])
        prime.push_back(i);
    }
    return prime.size();
}
int main()
{
    int TestCase;
    lint primeCounter=primeFinder();
    scanf("%d",&TestCase);
    int tc=1;
    while(TestCase--)
    {
        lint n;
        scanf("%ld",&n);
        lint c=0;
        for(int i=0;i<primeCounter && prime[i]<=(n>>1);i++)
        {
            lint a=n-prime[i];
            if(a==2&&a>=prime[i])
                c++;
            else if(a%2 && a>2 && checkPrime[a]==0 && a>=prime[i])
                c++;
        }
        printf("Case %d: %ld\n",tc,c);
        tc++;
    }
    return 0;
}
