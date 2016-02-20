#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=0,knt=0;
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='x')
            cnt++;
    }
    knt=n/2;
    if(cnt>knt)
    {
        int j=1;
        knt=cnt-knt;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='x'&&j<=knt)
            s[i]-=32,j++;
        }
    }
    else
    {
        int j=1;
        knt=knt-cnt;
        for(int i=0;i<n;i++)
        {
           if(s[i]=='X'&&j<=knt)
            s[i]+=32,j++;
        }
    }
    cout<<knt<<endl<<s<<endl;
    return 0;
}
