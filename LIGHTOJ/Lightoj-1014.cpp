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
lint primeFinder()
{
    bitset<46341> checkPrime;
    prime.push_back(2);
    for(int i=3;i<=sqrt(46340);i+=2)
    {
        if(!checkPrime[i])
        {
            for(int j=i*i;j<=46340;j+=i)
                checkPrime[j]=1;
        }
    }
    for(int i=3;i<=46340;i+=2)
    {
        if(!checkPrime[i])
            prime.push_back(i);
    }
    return prime.size();
}
int main()
{
    int TestCase;
    scanf("%d",&TestCase);
    int tc=1;
    while(TestCase--)
    {
        lint P,L,A;
        vector<lint>ans;
        scanf("%ld%ld",&P,&L);
        A=P-L;
        lint sq=sqrt(A);
        for(int j=1;j<=sq;j++)
        {
            if(A%j==0)
            {
                lint a=A/j;
                if(a==j&& a>L)
                ans.push_back(j);
                else
                {
                    if(a>L)
                    ans.push_back(a);
                    if(j>L)
                    ans.push_back(j);
                }
            }
        }
        printf("Case %d:",tc);
        lint ll=ans.size();
        sort(ans.begin(),ans.end());
        if(ll)
            for(int i=0;i<ll;i++)
            printf(" %ld",ans[i]);
        else
            printf(" impossible");
        printf("\n");
        tc++;
    }
    return 0;
}
