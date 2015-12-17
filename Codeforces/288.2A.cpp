#include<bits/stdc++.h>
using namespace std;
 int a[1005][1005];
int main()
{
   int n,m,k;
   cin>>n>>m>>k;
   vector<pair<int,int> >p;
   for(int i=1;i<=k;i++)
   {
       int b,v;
       cin>>b>>v;
       p.push_back(make_pair(b,v));
   }
   for(int i=0;i<k;i++)
   {
       int b,v;
       b=p[i].first;
       v=p[i].second;
       a[b][v]=1;
          if((a[b][v]+a[b-1][v]+a[b-1][v+1]+a[b][v+1])==4&&(v+1>=1&&v+1<=m&&b-1>=1&&b-1<=n))
          {
              cout<<i+1;
              return 0;
          }

          if((a[b][v]+a[b][v-1]+a[b+1][v-1]+a[b+1][v])==4&&(v-1>=1&&v-1<=m&&b+1>=1&&b+1<=n))
          {
              cout<<i+1;
              return 0;
          }

          if((a[b][v]+a[b][v+1]+a[b+1][v+1]+a[b+1][v])==4&&(v+1>=1&&v+1<=m&&b+1>=1&&b+1<=n))
          {
              cout<<i+1;
              return 0;
          }
          if((a[b][v]+a[b-1][v]+a[b-1][v-1]+a[b][v-1])==4&&(v-1>=1&&v-1<=m&&b-1>=1&&b-1<=n))
          {
              cout<<i+1;
              return 0;
          }

   }
   cout<<"0";
   return 0;
}
