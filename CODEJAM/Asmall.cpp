#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string str;
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    cin>>t;
    for(int i=1;i<=t;i++)
    {
      int cnt=0,knt=0;
      cin>>n>>str;
      //cnt+=str[0]-48;
      for(int j=0;j<=n;j++)
      {
          int m=str[j]-48;
          if(m)
          {
              if(cnt>=j)
                cnt+=m;
              else
              {
                  knt+=(j-cnt);
                  cnt+=(j-cnt);
                  cnt+=m;
              }
          }
      }
      cout<<"Case #"<<i<<": "<<knt<<endl;
    }
    return 0;
}
