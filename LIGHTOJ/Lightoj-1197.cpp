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
#define MM  46340
bitset <100005> checkPrime;
int prime[4800];
int totalPrime;
int primeNumber()
{
	 prime[totalPrime++]=2;
	 for(int i=3;i<=215;i+=2)
	 {
	 	 if(checkPrime[i]==0)
	 	 for(int j=i*i;j<=MM;j+=i)
	 	 {
             checkPrime[j]=1;
	 	 }
	 }
	 for(int i=3;i<=MM;i+=2)
	 	if(checkPrime[i]==0)
	 	prime[totalPrime++]=i;
	 	totalPrime;
	 	return 0;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(0);
    int TestCase;
    primeNumber();
    scanf("%d",&TestCase);
    for(int i=1;i<=TestCase;i++)
    {
       bitset<100005>checkPrim;
       int a,b;
       scanf("%d%d",&a,&b);
       int sq=sqrt(b);
       for(int j=0;j<totalPrime && prime[j]<=sq;j++)
       {
       	    llint jony=(llint)ceil(((double)a/prime[j]));
       	    jony*=prime[j];
       	    if(jony==prime[j])
       	 	jony=jony+prime[j];
       	 	for(;jony<=b;jony+=prime[j])
       	 	{
       	 		checkPrim[jony-a]=1;
       	 	}
       	 
       }
       int count=0;
       for(llint j=a;j<=b;j++)
       {
       	if(checkPrim[j-a]==0&& j!=1)
           count++;
       }
       printf("Case %d: %d\n",i,count);
    }
    return 0;
}