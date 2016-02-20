#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,m;
    cin>>n>>m;
    long cnt=m+1,b=1;
    for(int i=1;i<=m+1;i++)
    {
        if(i&1)
        {
        cout<<b<<" ";
        b++;
        }
        else
        {
            cout<<cnt<<" ";
            cnt--;
        }
    }
    for(int i=m+2;i<=n;i++)
        cout<<i<<" ";
    return 0;
}

