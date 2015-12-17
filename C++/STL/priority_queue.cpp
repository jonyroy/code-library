#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
int main()
{
  priority_queue<pair<int,int> >q;
  for(int i=1;i<7;i++)
   {
      int a,b;
      cin>>a>>b;
      q.push(pii(a,b));
   }
   while(!q.empty())
   {
     pii p=q.top();
     q.pop();
     cout<<p.first<<"  "<<p.second<<endl;
   }
}
