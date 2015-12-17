#include<bits/stdc++.h>
using namespace std;
vector<int>cnt;
int kmp[100000];
int prefix(string s)
{
    int len=s.length();
    int k=0;
    for(int i=2;i<=len;i++)
    {
      while(k>0&&s[k]!=s[i-1])
        k=kmp[k];
      if(s[k]==s[i-1])
        k++;
      kmp[i]=k;
    }
    return 0;
}
int kmp_algorithm(string text,string pattern)
{
    int k=0;
    int pa_len=pattern.length();
    int len=text.length();
    for(int i=1;i<=len;i++)
    {
      while(k>0&&pattern[k]!=text[i-1])
        k=kmp[k];
      if(pattern[k]==text[i-1])
        k++;
      if(pa_len==k)
        {
        cnt.push_back(i-pa_len+1);
        }
    }
    return 0;
}
int main()
{
    string p,t;
    getline(cin,t);
    cin>>p;
    prefix(p);
    kmp_algorithm(t,p);
    for(int i=0;i<cnt.size();i++)
    {
        cout<<"Enter Replace String=";
        string s;
        cin>>s;
        cout<<cnt[i]<<" ";
    }
    return 0;
}
