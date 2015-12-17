#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,st;
    cin>>s>>st;
    int l,len,a=0,b=0,cnt=0;
    l=s.length();
    for(int i=0;i<l;i++)
    {
        if(s[i]=='4'&&st[i]=='7')
            a++;
        else if(s[i]=='7'&&st[i]=='4')
            b++;
    }
    cnt=min(a,b);
    cnt+=(max(a,b)-min(a,b));
    cout<<cnt<<endl;
    return 0;
}
