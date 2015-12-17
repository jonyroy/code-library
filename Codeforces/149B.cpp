#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int> >a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int b,c;
        cin>>b>>c;
        a.push_back(make_pair(b,c));
    }
    int cnt=0;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++)
    {
        int cn=0;
        for(int j=i+1;j<n;j++)
        {
            if((a[i].first<=a[j].first)&&(a[i].second>=a[j].second)&&i<n&&j<n)
            {
                cn=1;
//                break;
            }
        }
        if(cn)
        cnt++;
    }
    if(cnt)
        cout<<cnt;
    else
        cout<<"-1";
    return 0;
}
