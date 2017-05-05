/*
* Author: Jony Roy
* Date: 28-02-2016
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
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    llint a[21];
    a[0]=1,a[1]=1;
    for(int i=2;i<=20;i++)
    {
       a[i]=a[i-1]*i;
    }
    for (int i = 1; i <= TestCase; ++i)
    {
       	llint n;
       	cin>>n;
       	vector<int> v;
       	for(int j=20;j>=0;j--)
       	{
           if(n>=a[j])
           {
           	v.p_b(j);
           	n=n-a[j];
           }
       	}
       	if(n)
       	printf("Case %d: impossible\n",i);
       else
       {
       	 printf("Case %d: ", i);
       	 reverse(v.begin(),v.end());
       	 for(int j=0;j<v.size()-1;j++)
          printf("%d!+",v[j] );
         printf("%d!\n",v[v.size()-1]);
       }
    }
    return 0;
}
