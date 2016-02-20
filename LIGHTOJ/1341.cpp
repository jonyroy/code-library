/*
* Author: Jony Roy
* Date: 16-02-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;
bitset <1000005> checkPrime;
std::vector<int> prime;
int totalPrime;
int primeNumber()
{
	 prime.p_b(2);
	 for(int i=3;i<=1000;i+=2)
	 {
	 	 if(checkPrime[i]==0)
	 	 for(int j=i*i;j<=1000000;j+=i)
	 	 {
       checkPrime[j]=1;
	 	 }
	 }
	 for(int i=3;i<=1000000;i+=2)
	 	if(checkPrime[i]==0)
	 		prime.p_b(i);
	 	totalPrime=prime.size();
	 	return 0;
}

int numberOfdivisor(llint n)
{
	int ans=1;
    for(int i=0;i<totalPrime && prime[i]<=sqrt(n);i++)
    {
    	int c=0;
    	while(n%prime[i]==0)
    	{
    		n/=prime[i];
    		c++;
    	}
    	ans*=(c+1);
    }
    if(n>1)
    	ans*=2;
	return ans/2;
}

int main(int argc, char const *argv[])
{
	int TestCase;
	primeNumber();
	scanf("%d",&TestCase);
	for (int i = 1; i <= TestCase; ++i)
	{
	   llint a,b;
	   scanf("%lld%lld",&a,&b);
	   printf("Case %d: ",i);
	   if(b*b>a)
	   	printf("0\n");
	   else
	   {
	   	 int ans=numberOfdivisor(a);
	   	 for(int j=1;j<b;j++)
	   	 	if(a%j==0)
	   	 		ans--;
	   	 	printf("%d\n",ans);
	   }
	}
	return 0;
}