#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105][105],m[105]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]==-1)
                continue;
            if(a[i][j]==1)
                m[i]=1;
            else if(a[i][j]==2)
                m[j]=1;
            else if(a[i][j]==3)
                m[i]=1,m[j]=1;
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
        if(m[i]==0)
        cnt++;
    cout<<cnt<<endl;
    for(int i=1;i<=n;i++)
        if(m[i]==0)
        cout<<i<<" ";
    return 0;
}
