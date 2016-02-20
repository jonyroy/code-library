#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s[20]={"1","1","2","3","322","5","35","7","2227","2337"},ss,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        if(m[i]>'1')
            ss+=s[m[i]-48];
    }
    sort(ss.begin(),ss.end());
    for(int i=ss.length()-1;i>=0;i--)
        cout<<ss[i];
    return 0;
}
