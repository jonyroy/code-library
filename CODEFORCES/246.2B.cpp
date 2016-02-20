#include<bits/stdc++.h>
using namespace std;
int main()
{
  int home[100005]={0},away[100005]={0},n,a[100005],b[100005];
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>a[i]>>b[i];
    home[a[i]]++,away[b[i]]++;
  }
  for(int i=1;i<=n;i++)
  {
    int m=home[b[i]];
    cout<<(n-1+m)<<" "<<n-1-m<<endl;
  }
}
