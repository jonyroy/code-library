#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
{
       return a.second<b.second;
}
int main()
{
    int n,a;
    vector<pair<int,int> >p;
   cin>>n;
   for(int i=1;i<=n;i++){
   cin>>a;
   p.push_back(make_pair(a,i));
   }
   sort(p.begin(),p.end());
   int cnt=0;
   for(int i=1;i<n;i++)
   {
      if(p[i-1].first==p[i].first)
      {
           ++p[i].first;
      }
      else if(p[i-1].first>p[i].first)
      p[i].first=p[i-1].first+1;
    }
   sort(p.begin(),p.end(),compare);
   for(int i=0;i<n;i++)
   {
       cout<<p[i].first<<" ";
   }
}
