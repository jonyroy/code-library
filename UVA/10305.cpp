#include<bits/stdc++.h>
using namespace std;
int main()
{
     int  n,m;
     while(cin>>n>>m)
     {
          vector<int>a[150],ou,po;
          int b[150]={0};
           if(n+m==0)
           break;
           for(int i=1;i<=m;i++)
           {
                       int cn,cnt;
                       cin>>cn>>cnt;
                       b[cnt]++;
                       a[cn].push_back(cnt);
           }
           while(1)
           {
           int cnt=1;
           for(int i=1;i<=n;i++)
           {
               if(b[i]==0)
               {
                   cnt=0;
                   --b[i];
                   po.push_back(i);
                   ou.push_back(i);
               }
            }
               if(cnt)
               break;
               else
               {
                for(int i=0;i<ou.size();i++)
                   {
                       for(int j=0;j<a[ou[i]].size();j++)
                         {
                               b[a[ou[i]][j]]--;
                         }
                   }
                   ou.clear();
               }
           }
           int len=po.size();
           for(int i=0;i<len-1;i++)
           cout<<po[i]<<" ";
           cout<<po[len-1]<<endl;
     }
}
