#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=1;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='0')
        {
            s[i]='2';
            cnt=0;
            break;
        }
    }
    if(cnt)
        s[s.size()-1]='2';
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='2')
            ;
        else
            cout<<s[i];
    }
}
