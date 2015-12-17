#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,a[500],m;
    cin>>n>>d;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    cin>>m;
    sort(a+1,a+n+1);
    int sum=0;
    if(n>=m)
        for(int i=1;i<=m;i++)
        sum+=a[i];
     else if(n<m)
            for(int i=1;i<=n;i++)
            sum+=a[i];
   if(m>n)
    {
   m=m-n;
   m=d*m;
   cout<<sum-m<<endl;
    }
    else
   cout<<sum<<endl;
    return 0;
}
