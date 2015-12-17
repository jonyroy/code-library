#include<bits/stdc++.h>
using namespace std;
int main()
{
    string  s,ss;
    cin>>s>>ss;
    int j=0,k=0,store[29]={0},stor[29]={0};
    int len1=s.size();
    int len2=ss.size();
    for(int i=0;i<len1;i++)
    store[s[i]-97]++;
    for(int i=0;i<len2;i++)
    stor[ss[i]-97]++;
    bool ache=true;
    for(int i=0;i<=25;i++)
    {
         if(stor[i]>store[i])
          ache=false;
    }
    for(int i=0;i<len2;i++)
    {

        while(ss[i]!=s[j]&&j<len1)
        {
        j++;
        }
        if(ss[i]==s[j])
        ++k,j++;
        if(j>=len1)
        break;
    }
    if(k==len2)
    cout<<"automaton";
    else if(ache&&len1==len2)
    cout<<"array";
    else if(ache&&len1>len2)
    cout<<"both";
    else
    cout<<"need tree";
}
