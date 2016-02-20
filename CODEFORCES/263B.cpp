#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a[55];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(k>n)
    {
        cout<<"-1";
        return 0;
    }
    sort(a+1,a+n+1);
    k=n-k+1;
    cout<<a[k]<<" "<<"0"<<endl;

}
