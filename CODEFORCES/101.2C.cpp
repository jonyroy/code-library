#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[3005];
    vector<pair<int,string> >a;
    map<int,int>cnt;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        int m;
        cin>>s>>m;
        a.push_back(make_pair(m,s));
    }
    sort(a.begin(),a.end());
    if(a[0].first)
    {
        cout<<-1;
        return 0;
    }
    for(int i=1;i<n;i++)
    {
      if(i<a[i].first)
      {
          cout<<-1;
          return 0;
      }
    }
    for(int i=n-1;i>=0;i--)
    {
        int k=n-a[i].first;
        while(1)
        {
          if(cnt[k]==1)
            k--;
          else if(k==0)
          {
              cout<<-1;
              return 0;
          }
          else
            break;
        }
        arr[i]=k;
        cnt[k]=1;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i].second<<" "<<arr[i]<<endl;
    }
    return 0;
}
