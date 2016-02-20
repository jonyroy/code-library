#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,pair<int,int> > a;
    int n;
    cin>>n;
    int m[1000]={0};
    for(int i=2;i<=n*2;i++)
    {
        for(int j=1;j<i;j++)
        {
            int x,y,z;
            cin>>x;
            a[x]=make_pair(i,j);
        }
    }
    map<int,pair<int,int> > :: reverse_iterator it;
    for(it=a.rbegin();it!=a.rend();it++)
    {
        pair<int,int>cnt;
       cnt=it->second;
       if(m[cnt.first]==0&&m[cnt.second]==0)
        m[cnt.first]=cnt.second,m[cnt.second]=cnt.first;
    }
    for(int i=1;i<=2*n;i++)
        cout<<m[i]<<" ";
    return 0;
}
