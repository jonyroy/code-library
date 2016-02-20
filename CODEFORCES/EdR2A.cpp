/*
  Date:18-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include<bits/stdc++.h>
using namespace std;
int IntStr(string bn)
{
    int len=bn.length();
    int flag=0,flag1=0;
    if(bn[0]=='0'&& len==1)
    {
        return 1;
    }
    if(bn[0]=='0'&& len>1)
        return 2;
    for(int i=0; i<len; i++)
    {
        if((bn[i]>='a'&&bn[i]<='z')||(bn[i]>='A'&&bn[i]<='Z')||bn[i]=='.'||bn[i]==',')
            return 2;
    }
    return 1;
}

int main()
{
    string s,cnt;
    vector<string> mb,a,b;
    char ch=34;
    cin>>s;
    int len=s.length();
    for(int i=0; i<len; i++)
    {
        if((s[i] == ',' || s[i] ==';' )&& i==len-1)
        {
            if(cnt.length()==0)
            {
//                mb.push_back(",");
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
        int t=IntStr(mb[i]);
        if(t==1)
            a.push_back(mb[i]);
        else
            b.push_back(mb[i]);
    }
    mb.clear();
    int l=a.size();
    if(l==0)
        cout<<"-"<<endl;
    else if(l==1)
    {
        cout<<ch<<a[0]<<ch<<endl;
    }
    else
    {
      cout<<ch<<a[0];
      for(int i=1;i<l;i++)
      {
          cout<<","<<a[i];
      }
      cout<<ch<<endl;
    }

    l=b.size();
    if(l==0)
        cout<<"-"<<endl;
    else if(l==1)
    {
        cout<<ch<<b[0]<<ch<<endl;
    }
    else
    {
      cout<<ch<<b[0];
      for(int i=1;i<l;i++)
      {

          if(b[i]==","||b[i-1]==",")
          cout<<b[i];
          else
          cout<<","<<b[i];
      }
      cout<<ch<<endl;
    }
    return 0;
}
