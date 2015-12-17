#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    vector<int>a;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    sort(a.begin(),a.end());
    int b=a[n-1]-a[0];
    if(b==0)
    {
        cout<<0<<" "<<(n*(n-1))/2;
    }
    else
    {
        long long int cnt=1,cn=1;
        for(int i=1;i<n;i++)
            if(a[0]==a[i])
            cnt++;
        else
            break;
        for(int i=n-2;i>=0;i--)
            if(a[n-1]==a[i])
            cn++;
            else
                break;
        cout<<b<<" "<<cn*cnt;
    }
}
