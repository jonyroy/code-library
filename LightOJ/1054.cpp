/*
* Author: Jony Roy
* Date: 07-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
#define MM 2147483647
#define M 1000000007
#include<bits/stdc++.h>
#define PI 3.1415926535897932384
#define p_b(x) push_back(x)
#define m_p(x) make_pair(x)
#define ft first
#define sd second
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
typedef pair<int,int> pint;
typedef pair<lint,lint> plint;
typedef pair<llint,llint> pllint;
llint len;
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
llint primeNumber()
{
    llint m=sqrt(MM);
    bitset<10000000> checkPrime;
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
int findPrimeFactor(lint *a,lint *b,lint n,lint l)
{
    lint sq=sqrt(n);
    lint k=0;
    for(lint i=0; i<=l && prime[i]<=sq; i++)
    {
        if(n%prime[i]==0)
        {
            b[k]=prime[i];
            while(n%prime[i]==0)
            {
                a[k]++;
                n/=prime[i];
            }
            k++;
        }
        sq=sqrt(n);
    }
    if(n>1)
    {
        b[k]=n;
        a[k]=1;
        return k;
    }
    return k-1;

}
int main()
{
    llint a,b;
    int TestCase;
    len=primeNumber()-1;
    scanf("%d",&TestCase);
    for(int i=1; i<=TestCase; i++)
    {
        lint pn[100]= {0},pc[100]= {0};
        scanf("%lld%lld",&a,&b);
        int kk=findPrimeFactor(pc,pn,a,len);
        llint  big,inverMod,ans=1;
        //for(int j=0;j<=kk;j++)
            //cout<<pn[j]<<" "<<pc[j]<<endl;
        for(int j=0; j<=kk; j++)
        {
            big=(bigmod((llint)pn[j],llint(pc[j]*b+1))-1)%M;
            inverMod=bigmod((llint)(pn[j]-1),(llint)(M-2));
            //cout<<big<<" "<<inverMod<<endl;
            ans=(ans*((big*inverMod)%M))%M;
        }
        printf("Case %d: %lld\n",i,ans);
    }
    return 0;
}
