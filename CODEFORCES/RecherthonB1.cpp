#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        a[i]=i+1;
    for(int i=1;i<m;i++)
    {
        next_permutation(a,a+n);
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
