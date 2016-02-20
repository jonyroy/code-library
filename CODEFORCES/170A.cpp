#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>n;
    int m;
    n.resize(105,0);
    cin>>m;
    for(int i=1;i<=m;i++)
    {
       cin>>n[i];
    }
    int s,t;
    cin>>s>>t;
    if(s>t)
    swap(s,t);
int sum=0,ss=0;
for(int i=s;i<t;i++)
    sum+=n[i];
for(int i=t;i<=m;i++)
    ss+=n[i];
for(int i=1;i<s;i++)
    ss+=n[i];
cout<<min(sum,ss);
    return 0;
}
