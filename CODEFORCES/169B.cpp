#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt[29]={0};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        cnt[s[i]-96]++;
        int cn=0;
    for(int i=1;i<=26;i++)
    {
        if(cnt[i])
        {
            if(cnt[i]%2)
                cn++;
        }
    }
    if(cn%2||cn==0)
        cout<<"First\n";
    else
       cout<<"Second\n";
    return 0;
}
