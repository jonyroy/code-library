#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    map<string,string>a,b;
    map<string,int>c,d;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        string s,sn;
        cin>>s>>sn;
        a[s]=sn;
        c[s]=1;
        d[sn]=2;
        b[sn]=s;
    }
    for(int i=1;i<=n;i++)
    {
        string sn,s;
        int f;
        cin>>sn;
        if(c[sn]==1)
        {
            f=1;
            s=a[sn];
        }
        else{
            f=2;
            s=b[sn];
        }

        if(s.size()>sn.size())
            cout<<sn<<" ";
        else if(s.size()<sn.size())
             cout<<s<<" ";
             else
             {
                 if(f==1)
                    cout<<sn<<" ";
                 else
                    cout<<s<<" ";
             }
    }
    return 0;
}
