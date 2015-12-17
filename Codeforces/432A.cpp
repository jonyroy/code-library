#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[2005],cnt=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    for(int i=1;i<=n;i++)
    if((5-a[i])>=k)
        cnt++;
    cout<<cnt/3;
}
