#include<bits/stdc++.h>
using namespace std;
int main()
{
     int  n,m,t=1;
     while(cin>>n)
     {
          map<string,int>strtoint;
          map<int,string>inttostr;
          vector<int>a[250],po;
          int b[250]={0};
          for(int i=1;i<=n;i++)
          {
               string s;
               cin>>s;
               strtoint[s]=i;
               inttostr[i]=s;
          }
          cin>>m;
           for(int i=1;i<=m;i++)
           {
                       string cn,cnt;
                       cin>>cn>>cnt;
                       int jo=strtoint[cn];
                       int jon=strtoint[cnt];
                       b[jon]++;
                       a[jo].push_back(jon);
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
           cout<<"Case #"<<t<<": Dilbert should drink beverages in this order: ";
           for(int i=0;i<len-1;i++)
           cout<<inttostr[po[i]]<<" ";
           cout<<inttostr[po[len-1]]<<"."<<endl<<endl;
           t++;
     }
}

