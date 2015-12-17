#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,ss,sss;
    cin>>s>>ss>>sss;
    s+=ss;
    sort(s.begin(),s.end());
    sort(sss.begin(),sss.end());
    if(s==sss)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
