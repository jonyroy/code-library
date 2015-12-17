#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int>a,b;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i]=='A'&&s[i+1]=='B')
        {
           a.push_back(i+1);
        }
        if(s[i]=='B'&&s[i+1]=='A')
        {
           b.push_back(i+1);
        }
    }
    for(int i=0;i<a.size();i++)
    {
       for(int j=0;j<b.size();j++)
       {
           if(abs(a[i]-b[j])>=2)
           {
               cout<<"YES\n";
               return 0;
           }
       }
    }
    cout<<"NO\n";
    return 0;
}
