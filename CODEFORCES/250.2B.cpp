#include<bits/stdc++.h>
using namespace std;
int main()
{
  int sum,limit,low[100005],s=0;
  vector<int>a;
  cin>>sum>>limit;
  for(int i=1;i<=limit;i++)
  low[i]=(i&-i);
  for(int i=limit;i>=1;i--)
  {
     if(low[i]<=sum)
     {
       sum-=low[i];
       a.push_back(i);
     }
  }
  if(sum)
  cout<<"-1";
  else
  {
  cout<<a.size()<<endl;
  for(int i=0;i<a.size();i++)
  cout<<a[i]<<" ";
  }
}
