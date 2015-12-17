//Key To Success
#include<bits/stdc++.h>
using namespace std;
class Key
{
    string s;
public:
    int input();
    void output();
};
int Key::input()
{
        getline(cin,s);
        if(s[0]=='0')
        return 0;
        return 1;
}
void Key::output()
{
    string ss="RSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string str="rstuvwxyzabcdefghijklmnopqrstuvwxyz";
    string j,r;
    int n=s[0]-48;
    for(int i=56;i<=90;i++)
    j[i]=ss[i-56];
    for(int i=88;i<=122;i++)
    r[i]=str[i-88];
    for(int i=1;i<s.length();i++)
    if(s[i]>='A'&&s[i]<='Z')
    cout<<j[s[i]-n];
    else if(s[i]>='a'&&s[i]<='z')
    cout<<r[s[i]-n];
    else
    cout<<s[i];
}
int main()
{
    Key a;
    while(a.input())
    a.output();
    return 0;
}
