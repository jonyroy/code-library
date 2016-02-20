#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[100005]={0};
    vector<pair<int,int> >a;
    map<int,int>cn;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        a.push_back(make_pair(b,c));
    }
    sort(a.begin(),a.end());
    int cnt=1;
    for(int i=0;i<=n;i++)
    {
        int jo=a[i].first,jony=a[i].second;
        if(!cn[jo])
            m[cnt++]=jo;
        cn[jo]=1;
        if(!cn[jony])
            m[cnt++]=jony;
        cn[jony]=1;
    }
    cnt--;
    if(cnt!=n)
        cout<<"-1";
    else
        for(int i=1;i<=n;i++)
        cout<<m[i]<<" ";
    return 0;
}
