/*
* Author: Jony Roy
* Date: 07-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int llint;
#define MM 2147483647
#define M 1000000007

llint bigmod(llint a,llint b)
{
    if(b==0)
        return 1%M;
    llint x=bigmod(a,b/2);
    x=(x*x)%M;
    if(b%2)
        x=(x*a)%M;
    return x;
}
vector<long long int>prime;
int primeNumber()
{
    llint m=sqrt(MM);
    bitset<1000000> checkPrime;
    prime.push_back(2);
    for(int i=3; i<=sqrt(m); i+=2)
    {
        if(!checkPrime[i])
        {
            for(int j=i*i; j<=m; j+=i)
                checkPrime[j]=1;
        }
    }
    for(int i=3; i<=m; i+=2)
        if(!checkPrime[i])
            prime.push_back(i);
    return prime.size();
}
int main()
{
    llint a,b;
    int TestCase;
    long int len=primeNumber()-1;
    scanf("%d",&TestCase);
    for(int i=1; i<=TestCase; i++)
    {
        scanf("%lld%lld",&a,&b);
        if(b==0)
        {
            printf("Case %d: 1\n",i);
            continue;
        }
        llint n=a;
        unsigned long long int ans=1;
        for(long int j=0; n>prime[j] && j<=len; j++)
        {
            if(n==1)
                break;
            int c=0;
            llint s=1;
            while(n%prime[j]==0)
            {
                n=n/prime[j];
                ++c;
            }
            if(c)
            {
                llint kk=(bigmod(prime[j],(unsigned long long )(c*b)+1))%M;
                kk--;
                llint ll=bigmod(prime[j]-1,M-2);
                ans=((ans%M)*((kk*ll)%M))%M;
            }
        }
        if(n>1)
        {
            llint kk=(bigmod(n,b+1))%M;
            kk--;
            llint ll=bigmod(n-1,M-2);
            ans=((ans%M)*((kk*ll)%M))%M;
        }
        printf("Case %d: %lld\n",i,ans%M);
    }
    return 0;
}
