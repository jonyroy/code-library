#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >a;
    int n,s;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    {
        int b,c;
        cin>>b>>c;
        a.push_back(make_pair(b,c));
    }
    sort(a.begin(),a.end());
    int cnt=0,m=s;
    for(int i=n-1;i>=0;i--)
    {
        cnt+=(m-a[i].first);
        if(cnt<a[i].second)
            cnt+=(a[i].second-cnt);
         m=a[i].first;
    }
    cnt+=(a[0].first);
    cout<<cnt<<endl;
    return 0;
}

