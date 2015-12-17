#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    if(s[0]=='9')
    {
        cout<<s[0];
        i=1;
    }
    for(;i<s.length();i++)
    {
        if(s[i]-48>=5)
            cout<<9-(s[i]-48);
        else
            cout<<s[i];
    }
    return 0;
}
