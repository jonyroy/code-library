#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10][10];
    cin>>n;
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
        cin>>a[i][j];
    for(int i=1;i<=4;i++)
    {
        if(a[i][1]+a[i][3]<=n)
        {
            cout<<i<<" "<<a[i][1]<<" "<<n-a[i][1]<<endl;
            return 0;
        }
        if(a[i][1]+a[i][4]<=n)
        {
            cout<<i<<" "<<a[i][1]<<" "<<n-a[i][1]<<endl;
            return 0;
        }
        if(a[i][2]+a[i][3]<=n)
        {
            cout<<i<<" "<<a[i][2]<<" "<<n-a[i][2]<<endl;
            return 0;
        }
        if(a[i][2]+a[i][4]<=n)
        {
            cout<<i<<" "<<a[i][2]<<" "<<n-a[i][1]<<endl;
            return 0;
        }
    }
    cout<<"-1\n";
    return 0;
}
