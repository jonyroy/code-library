#include<bits/stdc++.h>
using namespace std;
#define MAX 3001
#define MOD 1000000007
vector<int>ncr[MAX];
int main()
{

  ncr[0].push_back(1);
  for(int i=1;i<MAX;i++)
  {
      ncr[i].push_back(1);
      for(int j=1;j<i;j++)
      ncr[i].push_back((ncr[i-1][j]%MOD+ncr[i-1][j-1]%MOD)%MOD);
      ncr[i].push_back(1);
  }
  long long int  n,r;
  while(cin>>n>>r)
  cout<<ncr[n][r]<<endl;
  return 0;
}
