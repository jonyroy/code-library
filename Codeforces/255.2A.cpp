#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,n,a[500]={0},b[500];
    cin>>p>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(a[b[i]%p]==0)
        a[b[i]%p]=1;
        else
        {
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<"-1";
}
