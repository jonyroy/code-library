/*
* Author: Jony Roy
* Date: 27-02-2016
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
    scanf("%d%*c",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
       string a,b,c,d;
       getline(cin,a);
       getline(cin,b);
       for(int j=0;j<a.size();j++)
       {
       	 if(a[j]>='a' && a[j]<='z')
       	 c+=(a[j]-32);
       	 else if(a[j]>='A' && a[j]<='Z')
       	 c+=a[j];
       }
       for(int j=0;j<b.size();j++)
       {
       	 if(b[j]>='a' && b[j]<='z')
       	 d+=(b[j]-32);
       	 else if(b[j]>='A' && b[j]<='Z')
       	 d+=b[j];
       }
       sort(c.begin(),c.end());
       sort(d.begin(), d.end());
       if(c==d)
       	printf("Case %d: Yes\n",i);
       else
       	printf("Case %d: No\n",i);
    }
    return 0;
}
