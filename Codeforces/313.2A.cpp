#include<bits/stdc++.h>
using namespace std;
int main()
{
    int cnt=0;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int b;
        cin>>b;
        if(b==1)
        cnt=1;
    }
    if(cnt==1)
        cout<<"-1";
    else
        cout<<1;
    return 0;
}
