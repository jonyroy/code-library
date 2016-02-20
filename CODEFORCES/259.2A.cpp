#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1,m=n/2;
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=m;j++)
            cout<<"*";
        for(int j=1;j<=k;j++)
            cout<<"D";
        for(int j=1;j<=m;j++)
            cout<<"*";
            cout<<endl;
            k+=2;
            m--;
    }
    for(int i=1;i<=n;i++)
        cout<<"D";
        cout<<endl;
        k=1;
        m=n-2;
    for(int i=1;i<=n/2;i++)
    {
        for(int j=1;j<=k;j++)
            cout<<"*";
        for(int j=1;j<=m;j++)
            cout<<"D";
        for(int j=1;j<=k;j++)
            cout<<"*";
            cout<<endl;
            m-=2;
            k++;
    }
    return 0;
}
