#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,s;
    while(cin>>n>>k>>s)
    {
        int a[1005];
        k=k*s;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        sort(a+1,a+n+1);
        int count=0,sum=0;
        for(int i=n;i>=1;i--)
        {
           sum+=a[i];
           if(sum>=k)
           {
               count++;
               break;
           }
           else
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
