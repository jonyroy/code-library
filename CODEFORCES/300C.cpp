#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    vector<pair<long long int,long long int> >a;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        long long int b,c;
        cin>>b>>c;
        a.push_back(make_pair(b,c));
    }
    long long int ma=-1;
    long long int b=a[0].first-1;
    long long int c=a[0].second;
    ma=max(ma,a[0].second+b);
    for(int i=1;i<m;i++)
    {
       long long int b=a[i].first-a[i-1].first;
       long long int poky,pokyman,jokyman;
       poky=min(a[i].second,a[i-1].second);
       pokyman=max(a[i].second,a[i-1].second);
       jokyman=pokyman;
       pokyman=pokyman-poky;
       if(b<pokyman)
       {
           cout<<"IMPOSSIBLE\n";
           return 0;
       }
       b=b-pokyman;
       b=b/2;
       ma=max(ma,jokyman+b);
    }
    long long int len=a.size()-1;
    long long int popo=n-a[len].first;
    ma=max(ma,popo+a[len].second);
    cout<<ma<<endl;
    return 0;
}
