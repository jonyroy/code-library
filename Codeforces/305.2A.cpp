#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>s>>n;
    int len=s.length();
    if(len%n)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        int b=len/n,a=0;
        for(int i=1;i<=n;i++)
        {
            string k;
            k=s.substr(a,b);
            string c=k;
            reverse(c.begin(),c.end());
            if(c!=k)
            {
                cout<<"NO";
                return 0;
            }
            a=a+b;
        }
        cout<<"YES";
    }
    return 0;
}

