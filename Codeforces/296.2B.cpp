#include<bits/stdc++.h>
using namespace std;
vector<int>a;
int rnt[30][30];
int cnt=0,n;
string s,sn;
int main()
{
  cin>>n;
  cin>>s>>sn;
  for(int i=0;i<n;i++)
  {
      if(s[i]!=sn[i])
      {
          a.push_back(i);
          rnt[s[i]-96][sn[i]-96]=i+1;
          cnt++;
      }
  }
  for(int i=1;i<=26;i++)
  {
      for(int j=1;j<=26;j++)
      {
          if(rnt[i][j]&&rnt[j][i])
          {
              cout<<cnt-2<<endl;
              cout<<rnt[i][j]<<" "<<rnt[j][i]<<endl;
              return 0;
          }
      }
  }
  for(int i=1;i<=26;i++)
  {
      for(int j=1;j<=26;j++)
      {
          if(rnt[i][j])
          {
              for(int k=1;k<=26;k++)
              {
                  if(rnt[j][k])
                  {
                  cout<<cnt-1<<endl;
                  cout<<rnt[i][j]<<" "<<rnt[j][k]<<endl;
                  return 0;
                  }
              }
          }
      }
  }
  cout<<cnt<<endl;
  cout<<"-1 -1\n";
 return 0;
}
