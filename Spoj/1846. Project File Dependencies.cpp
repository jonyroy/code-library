#include<bits/stdc++.h>
using namespace std;
int main()
{
     int  n,m;
     while(cin>>n>>m)
     {
          vector<int>a[250],po;
          int b[250]={0};
           for(int i=1;i<=m;i++)
           {
                       int cn,cnt;
                       cin>>cn>>cnt;
                       b[cn]+=cnt;
                       for(int j=1;j<=cnt;j++){
                       int bunu;
                       cin>>bunu;
                       a[bunu].push_back(cn);
                       }
           }
           for(int i=1;i<=n;i++)
           {
                for(int j=1;j<=n;j++)
                {
                    if(b[j]==0)
                    {
                         po.push_back(j);
                         b[j]=-1;
                         for(int k=0;k<a[j].size();k++)
                         {
                             b[a[j][k]]--;
                         }
                         break;
                    }
                }
           }
           int len=po.size();
           for(int i=0;i<len-1;i++)
           cout<<po[i]<<" ";
           cout<<po[len-1]<<endl;
     }
}


