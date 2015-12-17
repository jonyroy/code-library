#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    map<string,char>b;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        string ss;
        cin>>ss;
        b[ss]='1';
    }
    for(int i=0;i<m;i++)
    {
            string ss,cn;
            cin>>ss;
            cn=ss;
            bool test=false;
            int len=cn.length();
            for(int j=0;j<len;j++)
            {
                ss=cn;
                if(ss[j]=='a')
                {
                    ss[j]='b';
                    if(b[ss]=='1')
                    {
                       test=true;
                    }
                    ss[j]='c';
                    if(b[ss]=='1')
                    {
                       test=true;
                    }
                }
               else if(ss[j]=='b')
                {
                    ss[j]='c';
                    if(b[ss]=='1')
                    {
                       test=true;
                    }
                    ss[j]='a';
                    if(b[ss])
                    {
                        test=true;
                    }
                }
                else
                {
                    ss[j]='b';
                    if(b[ss]=='1')
                    {
                        test=true;
                    }
                    ss[j]='a';
                    if(b[ss]=='1')
                    {
                        test=true;
                    }
                }
        }
        if(test)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
