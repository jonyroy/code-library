#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sn;
    cin>>s>>sn;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            s[i]=s[i]-32;
        if(sn[i]>='a'&&sn[i]<='z')
            sn[i]=sn[i]-32;
    }
    if(s<sn)
        cout<<"-1";
    else if(s==sn)
        cout<<"0";
    else
        cout<<"1";
    return 0;
}
