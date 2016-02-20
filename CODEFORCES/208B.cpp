#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,st;
    int n,k=0;
    cin>>n;
    str+="<3";
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        str+=s;
        str+="<3";
    }
    int len=str.length();
    cin>>st;
    int ln=st.length();
    int jony=0,flag=0,i;
    for( i=0;i<len;i++)
    {
        if(jony>=ln)
            {
             break;
            }
        while((str[i]!=st[jony])&&jony<ln)
            jony++;
        jony++;
    }
    if(i==len)
        cout<<"yes\n";
        else
        cout<<"no\n";
    return 0;
}
