#include<bits/stdc++.h>
using namespace std;
#define M 100006
typedef long  L;
typedef long long LL;
int main()
{
    int n,m[1005],sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
        cin>>m[i];
        }
      int l=1,r=n;
        int s=0,j=1;
      while(j<=n)
      {
          if(j%2)
          {
              if(m[l]>=m[r])
                sum+=m[l],l++;
              else
                sum+=m[r],r--;
          }
          else
          {
              if(m[l]>=m[r])
                s+=m[l],l++;
              else
                s+=m[r],r--;
          }
          j++;
      }
      cout<<sum<<" "<<s<<endl;
   return 0;
}
