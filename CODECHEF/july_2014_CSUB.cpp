#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m,t;
  string s;
  cin>>t;
  while(t--)
  {
    cin>>n;
    cin>>s;
    long long int cnt=0;
    long long int len=s.size();
    for(int i=0;i<len;i++)
    if(s[i]=='1')
    cnt++;
    cout<<(cnt*(cnt+1))/2<<endl;
  }
}
