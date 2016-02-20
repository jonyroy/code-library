#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110][110]={0},n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        a[i][i]=k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
