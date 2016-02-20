#include<bits/stdc++.h>
using namespace std;
long int a[200],b[200];
int main()
{

    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.length();i++)
        a[s[i]]++;
    for(int i=0;i<t.length();i++)
        b[t[i]]++;
    long yay=0,whoops=0;
    for(int i=65;i<=90;i++)
    {
        if(a[i]<=b[i])
        {
            yay+=a[i];
            b[i]=b[i]-a[i];
            a[i]=0;
        }
        else
        {
            yay+=min(b[i],a[i]);
            a[i]=a[i]-b[i];
            b[i]=0;
        }
        if(a[i+32]<=b[i+32])
        {
            yay+=a[i+32];
            b[i+32]=b[i+32]-a[i+32];
            a[i+32]=0;
        }
        else
        {
            yay+=min(b[i+32],a[i+32]);
            a[i+32]=a[i+32]-b[i+32];
            b[i+32]=0;
        }
           whoops+=min(a[i],b[i+32]);
           whoops+=min(a[i+32],b[i]);
    }
    cout<<yay<<" "<<whoops<<endl;
    return 0;
}
