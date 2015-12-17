#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[20]={0};
    string s;
    cin>>n;
    for(int i=1;i<=4;i++)
    {
        cin>>s;
        for(int j=0;j<4;j++)
            {
                if(s[j]!='.')
                m[s[j]-48]++;
            }
    }
    for(int i=1;i<=9;i++)
    if(m[i])
    if(m[i]>(2*n))
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    return 0;
}
