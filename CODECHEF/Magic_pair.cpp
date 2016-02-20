#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>m;
        n-=1;
        n=(n*(n+1))/2;
        cout<<n<<endl;
    }
    return 0;
}
