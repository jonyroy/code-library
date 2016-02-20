#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,q,a[505][505],b[505],mm=-1,ma,cnt;
    cin>>n>>m>>q;
    for(int i=1;i<=n;i++)
    {
        ma=-1,cnt=0;
        for(int j=1;j<=m;j++)
        cin>>a[i][j];
        for(int j=1;j<=m;j++)
        {
            if(a[i][j])
            {
                cnt++;
            }
            else
            {
                ma=max(ma,cnt);
                cnt=0;
            }
            ma=max(ma,cnt);
        }
        b[i]=ma;
    }

    for(int i=1;i<=q;i++)
    {
        int p,k;
        cin>>p>>k;
        if(a[p][k])
            a[p][k]=0;
        else
            a[p][k]=1;
            cnt=0;
            ma=-1;
        for(int j=1;j<=m;j++)
        {
            if(a[p][j])
            {
                cnt++;
            }
            else
            {
                ma=max(ma,cnt);
                cnt=0;
            }
            ma=max(ma,cnt);
        }
        b[p]=ma;
        mm=-1;
        for(int j=1;j<=n;j++)
            mm=max(mm,b[j]);
        cout<<mm<<endl;
    }
    return 0;
}

