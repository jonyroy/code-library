#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a="CODEFORCES",b="SECROFEDOC",str;
    cin>>s;
    int le=s.length();
    str=s;
    reverse(str.begin(),str.end());
    if(le>=10)
    {
    string jo=s.substr(0,10);
    if(jo==a)
    {
        cout<<"YES\n";
        return 0;
    }
    string jon=str.substr(0,10);
    if(b==jon)
    {
        cout<<"YES\n";
        return 0;
    }
    }
    int len=s.length();
    for(int i=1;i<=9;i++)
    {
        string ss=a.substr(0,i);
        string sa=a.substr(i,10-i);
        int l=sa.length();
        l=len-l;
        if(l<0)
        continue;
        string poky=s.substr(0,i);
        string pokyman=s.substr(l,10-i);
        if(ss==poky&&sa==pokyman)
        {
            cout<<"YES\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}
