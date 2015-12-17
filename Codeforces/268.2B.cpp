#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,q,l,r;
    cin>>p>>q>>l>>r;
    int cnt[3005]={0},cn[3005]={0};
    while(p--)
    {
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        cnt[i]++;
    }
    while(q--)
    {
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        cn[i]++;
    }
    int c=0;
    for(int i=l;i<=r;i++)
      for(int j=0;j<=1000;j++)
    {
        if(cn[j])
        {
            if(cnt[j+i])
            {
                c++;
                break;
            }
        }
    }
    cout<<c<<endl;
}
