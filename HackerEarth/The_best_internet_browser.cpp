#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string s;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>s;
        int a[200]={0};
        int len=s.length();
        for(int j=0;j<len-3;j++)
            a[s[j]]++;
        int sum=0;
        sum+=a['a'];
        sum+=a['e'];
        sum+=a['i'];
        sum+=a['o'];
        sum+=a['u'];
        sum+=3;
        sum=len-sum;
        sum--;
        cout<<sum<<"/"<<len<<endl;
    }
    return 0;
}
