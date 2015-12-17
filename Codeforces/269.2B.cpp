#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h[2005]={0},a[2005];
    vector<pair<int,int> >v;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        h[a[i]]++;
        v.push_back(make_pair(a[i],i));
    }
    sort(v.begin(),v.end());
    int cnt=0,cn=0;
    for(int i=1;i<=2000;i++)
    {
        if(h[i]>=3)
            cnt=1;
        if(h[i]>=2)
            cn++;
    }
    if(cnt==1||cn>=2)
    {
        cout<<"YES\n";
            for(int i=0;i<n;i++)
                cout<<v[i].second<<" ";
            cout<<"\n";
            int j,mn=0,jon=0;
            for(int i=0;i<n;i++)
            {
                if(v[i].first==v[i+1].first&&mn==0&&i+1<n)
                {
                    int k=v[i].first;
                    int l=v[i].second;
                    v[i].first=v[i+1].first;
                    v[i].second=v[i+1].second;
                    v[i+1].first=k;
                    v[i+1].second=l;
                    mn=1;
                    jon=i+1;
                }
                cout<<v[i].second<<" ";
            }
            cout<<endl;
            for(int i=0;i<jon;i++)
                cout<<v[i].second<<" ";
                mn=0;
            for(int i=jon;i<n;i++)
            {
                if(v[i].first==v[i+1].first&&mn==0&&i+1<n)
                {
                    int k=v[i].first;
                    int l=v[i].second;
                    v[i].first=v[i+1].first;
                    v[i].second=v[i+1].second;
                    v[i+1].first=k;
                    v[i+1].second=l;
                    mn=1;
                }
                cout<<v[i].second<<" ";
            }

    }
    else
        cout<<"NO\n";
        return 0;
}
