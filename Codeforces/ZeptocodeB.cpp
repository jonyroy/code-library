#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,k,cnt[2005]={0};
   string str[2005];
   cin>>n>>m>>k;
   for(int i=0;i<n;i++)
   cin>>str[i];
   for(int i=1;i<n;i++)
   {
     for(int j=0;j<m;j++)
     {
       if(str[i][j]=='L'){
       if(j-i>=0)
       cnt[j-i]++;
       }
       else if(str[i][j]=='R')
       {
         if(j+i<m)
         cnt[j+i]++;
       }
       else if(str[i][j]=='U')
       {
          if(i%2==0)
          cnt[j]++;
       }
     }
   }
  for(int i=0;i<m;i++)
  cout<<cnt[i]<<" ";
}
