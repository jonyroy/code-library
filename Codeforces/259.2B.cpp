#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005],n;
    cin>>n;
    int cnt=1,cn=1;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        if(a[i]<=a[i+1])
        cnt++;
        else
        break;
    for(int i=n;i>1;i--)
        if(a[i]>=a[i-1])
        cn++;
        else
        break;
        if(a[1]>=a[n]&&cnt+cn==n)
            cout<<cn<<endl;
        else if(cnt==n)
            cout<<"0\n";
        else
            cout<<"-1\n";
    return 0;
}
