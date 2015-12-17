#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,cnt=0,a=1;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1'&&a==1)
            cnt++,a=1;
        else if(s[i]=='0'&&a==1)
            cnt++,a=0;
    }
    cout<<cnt;
}
