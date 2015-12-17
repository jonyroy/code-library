#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ss=0,su=0;
    string s;
    cin>>n>>s;
    int m=n/2-1;
    for(int i=0;i<=m;i++)
    {
        if(s[i]=='4'||s[i]=='7')
            ss+=(s[i]-'0');
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    for(int i=m+1;i<n;i++)
    {
        if(s[i]=='4'||s[i]=='7')
            su+=(s[i]-'0');
        else
        {
            cout<<"NO";
            return 0;
        }
    }
    if(ss==su)
        cout<<"YES";
    else
        cout<<"NO";
}
