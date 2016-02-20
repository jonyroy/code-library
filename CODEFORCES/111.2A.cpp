#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,sum=0;
     int a[105];
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>a[i];
         sum+=a[i];
     }
     sort(a,a+n);
     int s=0,cnt=0;
     for(int i=n-1;i>=0;i--)
     {
         s+=a[i];
         ++cnt;
          if(s>sum-s)
          break;
     }
     cout<<cnt<<endl;
}
