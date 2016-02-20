#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15][15];
    for(int i=1;i<=10;i++)
    {
        a[1][i]=1;
        a[i][1]=1;
    }
    for(int i=2;i<=10;i++)
    {
        for(int j=2;j<=10;j++)
        {
            a[i][j]=a[i-1][j]+a[i][j-1];
        }
    }
    int b;
    cin>>b;
    cout<<a[b][b];
}
