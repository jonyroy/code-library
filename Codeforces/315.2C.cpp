#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=2;i<=1000;i++)
    {
        string s,ss;
        int n=i;
        while(n)
        {
            if(n%2)
                s+="1";
            else
                s+="0";
            n=n/2;
        }
        ss=s;
        reverse(ss.begin(),ss.end());
        if(s==ss)
            cout<<i<<" ";
    }
}
