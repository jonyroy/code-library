#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[29]={0};
    string str,s="abcdefghijklmnopqrstuvwxyz",ss;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size();i++)
        m[str[i]-96]=1;
    n--;
    ss+=str;
    while(n--)
    {
        cin>>str;
        for(int i=0;i<str.size();i++)
            m[str[i]-96]=1;
            ss+="1";
            ss+=str;
    }
    for(int i=1;i<=26;i++)
        {
            char ch;
        if(!m[i])
            {
                ch=96+i;
        cout<<ch<<endl;
        return 0;
            }
        }
        int flag=0;
        for(int i=0;i<26;i++)
        {
            for(int j=0;j<26;j++)
                {flag=0;
                for(int k=0;k<ss.length()-1;k++)
                {
                    if((s[i]==ss[k]&&s[j]==ss[k+1])&&(ss[k]!='1'&&ss[k+1]!='1'))
                    {
                        flag=1;
                    }
                }
                if(!flag)
                    {
                        cout<<s[i]<<s[j]<<endl;
                        return 0;
                    }
                }
        }
    return 0;
}
