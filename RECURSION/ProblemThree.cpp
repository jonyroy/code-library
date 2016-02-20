#include<bits/stdc++.h>
using namespace std;
int PrintOdd(int i,int &n,int a[])
{
    if(i>n)
    return 0;
    if(a[i]%2==0)
    {
        n--;
        for(int j=i;j<=n;j++)
            a[j]=a[j+1];
    }
    PrintOdd(i+1,n,a);
}
int main()
{
    int n,a[1000];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    PrintOdd(1,n,a);
    for(int i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}
