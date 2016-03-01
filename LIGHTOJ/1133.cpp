/*
* Author: Jony Roy
* Date: 23-02-2016
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

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; i++)
    {
       int n,m;
       int a[105];
       scanf("%d%d",&n,&m);
       for(int j=0;j<n;j++)
       {
       	scanf("%d",&a[j]);
       }	
       for(int j=1;j<=m;j++)
       {
       	 string s;
       	 int r;
       	 cin>>s;
       	 if(s=="S")
       	 {
       	 	cin>>r;
       	    for(int k=0;k<n;k++)
       	 	a[k]+=r;
       	 }
       	 else if(s=="M")
       	 {
       	 	cin>>r;
       	    for(int k=0;k<n;k++)
       	 	a[k]*=r;
       	 }
       	 else if(s=="D")
       	 {
       	 	cin>>r;
       	    for(int k=0;k<n;k++)
       	 	a[k]/=r;
       	 }
       	 else if(s=="R")
       	 {
       	 	for(int k=0;k<n/2;k++)
       	 	{
       	 		swap(a[k],a[n-k-1]);
       	 	}
       	 }
       	 else
       	 {
       	 	int t;
       	 	cin>>r>>t;
       	 	swap(a[r],a[t]);
       	 }
       }
       printf("Case %d:\n",i);
       for(int j=0;j<n-1;j++)
       {
       	 printf("%d ",a[j]);
       }
       printf("%d\n", a[n-1]);
    }
    return 0;
}