#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,m,b;
    cin>>n>>s;
    m=s.substr(0,n);
    b=s.substr(n,n);
    sort(m.begin(),m.end());
    sort(b.begin(),b.end());
    //cout<<m<<" "<<b<<endl;
    int cnt=0,cn=0;
    for(int i=0;i<n;i++)
    {
         if(m[i]<b[i])
         cnt++;
         if(m[i]>b[i])
         cn++;
    }
    if(cnt==n||cn==n)
    cout<<"YES\n";
    else
    cout<<"NO\n";
}
