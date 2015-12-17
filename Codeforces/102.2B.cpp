#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,cnt,str,m;
    cin>>s;
    bool test=false;
    if(s[0]=='-')
    {
    s.erase(0,1);
    test = true;
    }
    int i,a=0;
    for(i=0;i<s.length();i++)
    {
       if(s[i]=='.')
       break;
       cnt+=s[i];
       a+=(s[i]-48);
    }
    i++;
    for(;i<s.length();i++)
    {
        str+=s[i];
    }
    if(str.length()==2)
        ;
    else if(str.length()==1)
        str+='0';
    else if(str.length()==0)
        str+="00";
        else
        {
            string b;
            b+=str[0];
            b+=str[1];
            str=b;
        }
    if(a==0)
    {
        if(test)
        {
            cout<<"($0."<<str<<")";
        }
        else
            cout<<"$0."<<str;
        return 0;
    }
    int l=0;
    for(int i=cnt.length()-1;i>=0;i--)
    {
        if(l==3)
        {
           m+=',';
           m+=cnt[i];
           l=1;
        }
        else{
            l++;
            m+=cnt[i];
        }
    }
    string jony;
    for(int i=m.length()-1;i>=0;i--)
    {
        jony+=m[i];
    }
    if(test)
    {
        cout<<"($"<<jony<<"."<<str<<")";
    }
    else
        cout<<"$"<<jony<<"."<<str;
    return 0;
}
