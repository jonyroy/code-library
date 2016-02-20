#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,c=0,cnt=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    int m;
    cin>>m;
    if(m==100)
    c++;
    else
    cnt++;
  }
  if(c%2==0&&cnt%2==1&&c>0)
  cout<<"YES";
  else if(c%2==0&&cnt%2==0)
  cout<<"YES";
  else
  cout<<"NO";

}
