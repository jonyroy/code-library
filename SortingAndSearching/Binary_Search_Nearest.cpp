#include<bits/stdc++.h>
using namespace std;
#define N 1000
int store[N];
int Binary_search(int val)
{
    int l=1,r=cn;
    int m=(l+r)/2;
    while(l<=r)
    {
        if(store[m]<val)
        l=m+1;
        else if(store[m]==val)
        return val;
        else
        r=m-1;
        m=(l+r)/2;
    }
    return store[l];
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>store[i];
    sort(store+1,store+n+1);
    return 0;
}
