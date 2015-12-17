#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[200];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>s[i];
    for(int i=1;i<=n-2;i++)
    {
        for(int j=1;j<=n-2;j++)
        {
            if(s[i][j]=='#'&&s[i-1][j]=='#'&&s[i][j-1]=='#'&&s[i][j+1]=='#'&&s[i+1][j]=='#')
            {
                s[i][j]='0';
                s[i-1][j]='0';
                s[i][j-1]='0';
                s[i][j+1]='0';
                s[i+1][j]='0';
            }
        }
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    if(s[i][j]=='#')
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    return 0;
}
