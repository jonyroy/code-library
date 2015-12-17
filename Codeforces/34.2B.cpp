#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[105];
    cin>>n>>m;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int sum=0;
    for(int i=0;i<m;i++)
    {
        if(a[i]<0){
        a[i]*=(-1);
        sum+=a[i];
        }
    }
    cout<<sum;
}
