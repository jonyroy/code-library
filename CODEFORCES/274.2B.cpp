#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int> >a,b;
    vector<int>c;
    int n,k,m,sum=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int km;
        cin>>km;
        sum+=km;
        a.push_back(make_pair(km,i));
    }
    for(int i=0;i<k;i++)
    {
        sort(a.begin(),a.end());
        int cnt=a[n-1].first-a[0].first;
        if(cnt)
        {
            a[0].first+=1;
            a[n-1].first-=1;
            b.push_back(make_pair(a[n-1].second,a[0].second));
        }
    }
    sort(a.begin(),a.end());
    cout<<a[n-1].first-a[0].first<<" "<<b.size()<<endl;
    for(int i=0;i<b.size();i++)
    {
            cout<<b[i].first<<" "<<b[i].second<<endl;
    }
    return 0;
}
