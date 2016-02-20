#include<bits/stdc++.h>
using namespace std;
int main()
{

    string str,s,ss,k;
    int i;
    cin>>str>>s;
    for(i=0;i<str.size();i++)
        {
        if(str[i]=='|')
        break;
        else
        ss+=str[i];
        }
    for(int j=i+1;j<str.size();j++)
        k+=str[j];
    int m=(str.size()-1)+s.size();
    if(m%2)
    cout<<"Impossible";
    else
    {
        int n=m/2;
        int b=ss.size(),l=k.size();
        if(b>n||l>n)
        {
        cout<<"Impossible";
        return 0;
        }
        b=n-b,l=n-l;
        string o,p;
        int j;
        for(j=0;j<b;j++)
            o+=s[j];
        for(int t=j;t<s.size();t++)
            p+=s[t];
            o+=ss,k+=p;
            cout<<o<<"|"<<k;
    }
    return 0;
}
