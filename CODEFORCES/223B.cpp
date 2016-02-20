#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[100006]={0},r=0,t=0,v[100006],p[100006];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>m[i];
    sort(m+1,m+n+1);
    for(int i=1;i<=n;i++)
    {
        if(m[i-1]<m[i])
            v[++r]=m[i];
        else
            p[++t]=m[i];
    }
    for(int i=t;i>=1;i--)
    {
        if(v[r]>p[i])
        v[++r]=p[i];
    }
    cout<<r<<endl;
    for(int i=1;i<=r;i++)
        cout<<v[i]<<" ";
    return 0;
}
