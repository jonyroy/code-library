#include<bits/stdc++.h>
using namespace std;
#define MAX 100000000
vector<int>ncr[MAX];
int main()
{

  ncr[0].push_back(1);
  for(int i=1;i<MAX;i++)
  {
      ncr[i].push_back(1);
      for(int j=1;j<i;j++)
      ncr[i].push_back(ncr[i-1][j]+ncr[i-1][j-1]);
      ncr[i].push_back(1);
  }
  int n,r;
  while(cin>>n>>r)
  cout<<ncr[n][r]<<endl;
  return 0;
}
