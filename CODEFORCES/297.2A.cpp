#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>m;
    int n,cnt=0;
    string s;
    cin>>n;
    cin>>s;
    for(int i=0;i<s.size();i+=2)
    {
        if(s[i]-32==s[i+1])
            ;
        else
        {
            if(m[s[i+1]])
            {
                m[s[i+1]]--;
                m[s[i]-32]++;
            }
            else
            {
              m[s[i]-32]++;
              cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
