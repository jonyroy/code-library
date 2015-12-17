#include<bits/stdc++.h>
using namespace std;
vector<pair<string,string> >a;
    int n;
    int hhh[100005];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s,sn;
        cin>>s>>sn;
        a.push_back(make_pair(s,sn));
    }
    for(int i=1;i<=n;i++)
        cin>>hhh[i];
    string univ;
    univ=min(a[hhh[1]-1].first,a[hhh[1]-1].second);
    for(int i=2;i<=n;i++)
    {
        string cnt=min(a[hhh[i]-1].first,a[hhh[i]-1].second);
        string bnt=max(a[hhh[i]-1].first,a[hhh[i]-1].second);
        if(cnt>=univ&&bnt>=univ)
        {
            univ=min(cnt,bnt);
        }
        if(univ>cnt&&univ>bnt)
        {
            cout<<"NO\n";
            return 0;
        }
        if(univ>cnt&&univ<=bnt)
            univ=bnt;
        if(univ>bnt&&univ<=cnt)
            univ=cnt;
    }
    cout<<"YES\n";
}
