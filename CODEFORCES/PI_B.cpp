#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<string,int> >a;
    int n;
    cin>>n;
    int k=1;
    while(k<=n)
    {
        string s;
        int cnt;
        cin>>s>>cnt;
        a.push_back(make_pair(s,cnt));
        k++;
    }
    int cnt=0;
    for(int i=n-1;i>=0;i--)
    {
        bool c=true;
       if(a[i].first=="-")
      {
       for(int j=i-1;j>=0;j--)
       {
          if(a[i].second==a[j].second&&a[j].first=="+")
            c=false;
       }
       if(c)
        cnt++;
      }
    }
    int cpp=cnt;
    for(int i=0;i<n;i++)
    {
        if(a[i].first=="+")
        {
            cnt++;
            cpp=max(cpp,cnt);
        }
        else
        cnt--;
    }
    cout<<cpp<<endl;
    return 0;
}
