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
    int flag=0,flag1=0;
    if(bn[0]=='0')
        flag=1;
    for(int i=1; i<len; i++)
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
    for(int i=0; i<len; i++)
    {
        if(s[i]!=',')
            return 1;
    }
    return 0;
}
int main()
{
    string s,cnt,a,b;
    vector<string> mb;
    char ch=34;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        if((s[i] == ',' || s[i] ==';' )&& i==len-1)
        {
            if(cnt.length()==0)
            {
                mb.push_back(",");
                mb.push_back(",");
            }
            else
            {
                mb.push_back(cnt);
                mb.push_back(",");
            }
            cnt.clear();
        }
        else if(s[i]==','||s[i]==';')
        {
            if(cnt.length()==0)
                mb.push_back(",");
            else
                mb.push_back(cnt);
            cnt.clear();
        }
        else
        {
            cnt+=s[i];
        }
    }
    if(cnt.length()>0)
        mb.push_back(cnt);
    for(int i=0; i<mb.size(); i++)
    {
        cout<<mb[i]<<endl;
    }
    mb.clear();
    return 0;
}
