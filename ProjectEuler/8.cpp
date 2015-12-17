#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string str;
    cin>>str;
    int m=-1;
    for(int i=0;i<str.size();i++)
    {
        string s=str.substr(i,5);
        int mn=(s[0]-48)*(s[1]-48)*(s[2]-48)*(s[3]-48)*(s[4]-48);
        m=max(m,mn);
    }
    cout<<m;
    return 0;
}
