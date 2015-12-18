/*
 Date:20-12-2015
 Created By Jony Roy
 Be Happy & Enjoy The Moment.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],v[100005],sum=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    int b=sum%n;
    sum=sum/n;
    int c=n-b;
    int cnt=0,cn=0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        v[i]=sum;
    }
    int h=n-1;
    for(int i=0;i<b;i++)
    {
        v[h]++;
        h--;
    }
    for(int i=0;i<n;i++)
    {
        cnt+=(abs(a[i]-v[i]));
    }
    cout<<cnt/2<<endl;
    return 0;
}
