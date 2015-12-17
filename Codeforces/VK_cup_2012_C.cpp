#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;
     cin>>n;
     getchar();
     string s="/";
     for(int i=1;i<=n;i++)
     {
          string m;
          getline(cin,m);
          if(m=="pwd")
          cout<<s<<endl;
          else
          {
               if(m[3]=='/')
               s.clear();
                   for(int j=3;j<m.size();j++)
                    {
                      string st;
                      while(m[j]!='/'&&j<m.size())
                        {
                           st+=m[j];
                           j++;
                         }
                      if(st=="..")
                        {
                         s.erase(s.size()-1,1);
                         int t=s.size()-1;
                          while(s[t]!='/')
                          {
                             s.erase(t,1);
                             t--;
                          }
                         }
                      else
                      {
                      s+=st;
                      s+="/";
                       }
                      }
                  }
          }
}
