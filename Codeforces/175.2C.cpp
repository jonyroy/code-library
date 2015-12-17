#include<bits/stdc++.h>
using namespace std;
int main()
{
   // freopen("in","r",stdin);
    //freopen("ou","w",stdout);
    long long int  n;
     long long int sum=0;
     long long int a[300005];
     cin>>n;
     for(int i=1;i<=n;i++)
     cin>>a[i];
     sort(a+1,a+n+1);
     for(long long  int i=1;i<=n;i++)
     {
        if(a[i]<i)
        sum+=(i-a[i]);
        else if(a[i]>i)
        sum+=(a[i]-i);
     }
     cout<<sum<<endl;
}
