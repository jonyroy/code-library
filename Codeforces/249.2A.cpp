#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int cnt;
        cin>>cnt;
        sum+=cnt;
    }
    int re=sum/m;
    if(sum%m)
        re++;
    cout<<re<<endl;
    return 0;
}
