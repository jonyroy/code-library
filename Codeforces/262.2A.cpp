#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cnt=n,sum=0;
    while(cnt/m)
    {
        n+=(cnt/m);
        cnt=cnt/m+cnt%m;
    }
    cout<<n<<endl;
    return 0;
}
