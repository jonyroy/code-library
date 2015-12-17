#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,n,m;
    int cnt=0;
    cin>>s>>n;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-48+n[i]-48)==1)
        {
            cnt++;
            if(cnt&1)
            {
                m+=n[i];
            }
            else
            {
                m+=s[i];
            }
        }
        else
            m+=s[i];
    }
    if(cnt%2)
        cout<<"impossible"<<endl;
    else
        cout<<m<<endl;
    return 0;
}
