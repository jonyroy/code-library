#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t,a;
    cin>>s>>t;
    int cnt=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(cnt&&s[i]=='z')
        {
            s[i]='a';
            cnt=1;
        }
        else if(cnt)
        {
            s[i]++;
            if(s<t)
            {
                cout<<s<<endl;
                return 0;
            }
            cnt=0;
        }
        else if(s[i]=='z'&&i-1>0)
        {
         s[i]='a';
         cnt=1;
        }
        else
        {
          string sr=s;
          sr[i]++;
          if(sr<t)
          {
              cout<<sr;
              return 0;
          }
          cnt=0;
        }
    }
    cout<<"No such string";
    return 0;
}
