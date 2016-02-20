#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m=0,a[105],x,y,sum[105]={0},j;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      cin>>a[i];
      sum[i]=sum[i-1]+a[i];
  }
  cin>>x>>y;
  for(int i=1;i<=n;i++)
  {
      if(sum[i]>=x&&sum[i]<=y)
        {
            int b=sum[n]-sum[i];
            if(b>=x&&b<=y)
            {
                cout<<i+1;
                return 0;
            }
        }
  }
    cout<<"0\n";
  return 0;
}
