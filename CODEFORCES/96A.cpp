#include<bits/stdc++.h>
using namespace std;
int main()
{
  char jony[105];
  int sum=0;
  cin>>jony;
  int len=strlen(jony);
  if(len<7)
  cout<<"NO\n";
  else
  {
    for(int i=0;i<=6;i++)
    sum+=(jony[i]-48);
    if(sum==7||sum==0)
    cout<<"YES\n";
    else
    {
      for(int i=7;i<len;i++)
      {
        sum-=(jony[i-7]-48);
        sum+=(jony[i]-48);
        if(sum==7||sum==0){
        cout<<"YES\n";
        return 0;
        }
      }
      cout<<"NO\n";
    }
  }
}
