/*
* Author: Jony Roy
* Date: 22-06-2016
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

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}

int main(int argc, char *argv[])
{

   int n;
   vector<pair<int ,int> > ans;
   int a[105],b[105];
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>a[i];
       b[i]=a[i];
   }
   sort(b+1,b+n+1);
   for(int i=1;i<=n;i++)
   {
       for(int j=i;j<=n;j++)
       {
          if(b[i]==a[j])
          {
              for(int k=j;k>i;k--)
              {
                  swap(a[k],a[k-1]);
                  ans.push_back(make_pair(k-1,k));
              }
              break;
          }
       }
   }
   //cout<<ans.size()<<endl;
   for(int i=0;i<ans.size();i++)
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
   return 0;
}

