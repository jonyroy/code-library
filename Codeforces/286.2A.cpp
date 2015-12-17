#include<bits/stdc++.h>
using namespace std;
bool palindrome(string s)
{
    int i=0,j=s.size()-1;
    while(i<=j)
    {
        if(s[i]==s[j])
        ;
        else
        return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s,ss,m="abcdefghijklmnopqrstuvwxyz";
    cin>>s;
    for(int i=0;i<=s.size();i++)
    {
        for(int j=0;j<=25;j++)
        {
            string dd=s,n;
            n+=m[j];
            dd.insert(i,n);
            bool t=palindrome(dd);
            if(t)
            {
                cout<<dd<<endl;
                return 0;
            }
        }
    }
    cout<<"NA";
    return 0;
}
