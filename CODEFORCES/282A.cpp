#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,cnt=0;
  string s;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    cin>>s;
    if(s[1]=='+')
    cnt++;
    else
    cnt--;
  }
  cout<<cnt<<endl;
}
