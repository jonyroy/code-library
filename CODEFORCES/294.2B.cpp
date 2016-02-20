#include<bits/stdc++.h>
using namespace std;
map<int,int>a,b;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        a[m]++;
    }
    for(int i=1;i<n;i++)
    {
        int m;
        cin>>m;
        a[m]--;
        b[m]++;
    }
    int f,s;
    map<int,int>:: iterator it;
    for(it=a.begin();it!=a.end();it++)
        if(it->second>0)
        f=it->first;
    for(int i=1;i<n-1;i++)
    {
        int m;
        cin>>m;
        b[m]--;
    }
    for(it=b.begin();it!=b.end();it++)
        if(it->second>0)
        s=it->first;
    cout<<f<<endl<<s;
    return 0;
}
