#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[100050],i;
    cin>>n>>k;
    if(n==k)
    {
        cout<<"-1\n";
        return 0;
    }
    for(int j=1;j<=n;j++)
        a[j]=j;
    int m=n-k;
    if(m%2)
        i=2;
    else
        i=1;
    for(;i<=m;i+=2)
      a[i]=i+1,a[i+1]=i;
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
