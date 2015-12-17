#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b;
    long sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      cin>>b;
      sum+=b;
    }
    if(sum<0)
        sum*=(-1);
    if(sum%n==0)
        cout<<n;
    else
        cout<<n-1;
    return 0;
}
