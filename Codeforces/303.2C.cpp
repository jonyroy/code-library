#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,cnt=2,a[100005],b[100005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    else if(n==2)
    {
        cout<<2<<endl;
        return 0;
    }
    else
    for(int i=2;i<n;i++)
    {
        int m=a[i]-a[i-1];
        int bm=a[i+1]-a[i];
        if(b[i]<m)
        cnt++;
        else if(b[i]<bm)
        {
            cnt++;
            a[i]=a[i]+b[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}
