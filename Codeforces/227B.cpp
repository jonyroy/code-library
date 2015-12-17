#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>ma;
    int n,m,cnt=0,a[3009],b[3009];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        //ma[b[i]]++;
    }
    int h=0;
    for(int i=1;i<=n;i++)
        {
            h=0;
          for(int j=1;j<=m;j++)
            {
            if(a[i]==b[j]||a[i]<=b[j])
             {
                 h=1;
                 b[j]=0;
                 break;
             }
             }
             if(h==0)
                cnt++;
        }
    cout<<cnt<<endl;
    return 0;
}
