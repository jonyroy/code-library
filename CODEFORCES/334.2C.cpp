#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long llg;
typedef long lg;
typedef pair<int,int> pr;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int flip;
    if(s[0]=='0')
        flip=0;
    else
        flip=1;
    int sum=1;
    for(int i=1;i<s.length();i++)
    {
        if(s[i]=='0'&&flip==1)
            flip=0,sum++;
        else if(s[i]=='1'&&flip==0)
            flip=1,sum++;
    }
    int len=s.length();
    int one=0,zero=0;
    for(int i=0;i<len-1;i++)
    {
        if(s[i]=='1'&&s[i+1]=='1')
            one++;
        if(s[i]=='0'&&s[i+1]=='0')
            zero++;
    }
    if(one>=2||zero>=2)
        sum+=2;
    else if(one==1&&zero==1)
        sum+=2;
    else if(one==1||zero==1)
        sum+=1;
    cout<<sum<<endl;
    return 0;
}
