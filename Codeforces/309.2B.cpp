#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>a;
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        a[s]++;
    }
    map<string,int>::iterator it;
    int ma=-1;
    for(it=a.begin();it!=a.end();it++)
    {
        int cnt=it->second;
        ma=max(ma,cnt);
    }
    cout<<ma<<endl;
    return 0;
}

