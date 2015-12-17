#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>m;
    k=n+m;
    if(n>=m)
    for(int i=1;i<=k;i++)
    {
        if(n)
        {
            cout<<"B";
            n--;
        }
        if(m)
        {
            cout<<"G";
            m--;
        }
    }
    else
    for(int i=1;i<=k;i++)
    {
        if(m)
        {
            cout<<"G";
            m--;
        }
        if(n)
        {
            cout<<"B";
            n--;
        }
    }
    return 0;
}
