#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >a,b;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int cnt,cn;
        cin>>cnt>>cn;
        a.push_back(make_pair(cnt,cn));
        b.push_back(make_pair(cn,cnt));
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    long long int ch=a[0].first;
    long long int ck=a[n-1].first;
    long long int ctr=b[0].first;
    long long int ctk=b[n-1].first;
    ck=ck-ch;
    ctk=ctk-ctr;
    if(ck<0)
        ck*=(-1);
    if(ctk<0)
        ctk*=(-1);
    ctk=max(ctk,ck);
    cout<<ctk*ctk;
}
