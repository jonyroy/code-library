#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,pair<int,int> >a;
    map<int,int>m;
    int n,ma=-1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int b;
        cin>>b;
        m[b]++;
        int l=m[b];
        if(l>ma)
        {
            ma=l;
        }
        pair<int,int> p,q;
        p=a[b];
        //cout<<"p.first="<<p.first<<" "<<p.second<<endl;
        if(p.first==0&&p.second==0)
        {
            q.first=i,q.second=i;
            //cout<<"q.first="<<q.first<<" "<<q.second<<endl;
        }
        else
            {
              q.first=min(i,p.first);
              q.second=max(i,p.second);
              //cout<<"q.first="<<q.first<<" "<<q.second<<endl;
            }
        a[b]=q;
    }
    map<int,int>::iterator it;
    pair<int,int>r,t;
    r.second=100000000;
    r.first=0;
    for(it=m.begin();it!=m.end();it++)
    {
       int j=it->second;
       if(ma==j)
       {
           t=a[it->first];
           if(t.second-t.first<r.second-r.first)
            r=t;
       }
    }
    cout<<r.first<<" "<<r.second<<endl;
    return 0;
}

