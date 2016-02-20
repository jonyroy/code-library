#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[105]={0},b[105]={0};
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int j,k,l;
        cin>>j>>k>>l;
        a[j]+=l,b[k]+=l;
    }
    int sum=0;
    for(int i=1;i<=n;i++)
    {
      if(a[i]>=b[i])
        sum+=(a[i]-b[i]);
    }
    cout<<sum<<endl;
    return 0;
}

