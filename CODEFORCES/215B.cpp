#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100050],store[100050];
    set<int>s;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=n;i>=1;i--)
    {
        s.insert(a[i]);
        int k=s.size();
        store[i]=k;
    }
    for(int i=1;i<=m;i++)
        {
            int l;
        cin>>l;
        cout<<store[l]<<endl;
        }
    return 0;
}
