#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[105],cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        cnt+=a[i];
        if(cnt>m)
        {
            cout<<"NO\n";
            return 0;
        }
    }
    cout<<"YES\n";
    return 0;
}
