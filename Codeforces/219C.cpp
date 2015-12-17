#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s[500100];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s[i];
    sort(s+1,s+n+1);
    int m=n,c=0;
    for(int i=n/2;i>=1;i--)
    {
        if((2*s[i])<=s[m])
        {
            c++;
            m--;
        }
    }
    cout<<n-c;
}
