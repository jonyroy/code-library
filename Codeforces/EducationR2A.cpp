/*
  Date:18-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include<bits/stdc++.h>
using namespace std;
int test(string bn)
{
    int len=bn.length();
    if(len==0)
        return 0;
    int flag=0,flag1=0;
    if(bn[0]=='0')
        flag=1;
    for(int i=1;i<len;i++)
    {
        if((bn[i]>='a'&&bn[i]<='z')||(bn[i]>='A'&&bn[i]<='Z')||bn[i]=='.')
        flag1=1;
    }
    if(flag1==1||(flag==1&&len>1))
    return 1;
    return 2;
}
int abcxyz(string s)
{
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]!=',')
            return 1;
    }
    return 0;
}
int main()
{
    string s,cnt,a,b;
    char ch=34;
    cin>>s;
    int len=s.length();
    for(int i=0;i<len;i++)
    {
        if(s[i]==','||s[i]==';')
        {
            int v=test(cnt);
            if(v==0)
                a+=",";
            else if(v==1)
                b+=cnt;
            else
                a+=cnt;
            cnt.clear();
        }
        else
        {
            cnt+=s[i];
        }
    }
    if(abcxyz(a))
        cout<<"-"<<endl;
    else
    {
        cout<<ch<<a<<ch<<endl;
    }
     if(abcxyz(b))
        cout<<"-"<<endl;
    else
    {
        cout<<ch<<b<<ch<<endl;
    }
    return 0;
}
