#include<bits/stdc++.h>
using namespace std;
int PrintReverse(int *ar,int index,int n)
{
    if(index==n+1)
        return 0;
    PrintReverse(ar,index+1,n);
    cout<<ar[index]<<" ";
    return 0;
}
int main()
{
    int a[100],n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    PrintReverse(a,1,n);
    return 0;
}
