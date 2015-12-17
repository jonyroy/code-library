#include<bits/stdc++.h>
using namespace std;
int sum=0;
int recursion(int n,int b[])
{
   if(n==0)
   return 0;
//   cout<<b[n]<<" ";
   recursion(n-1,b);
   if(b[n]%2==0)
    cout<<b[n]<<" ";
   return 0;
}
int main()
{
    int n,b[100];
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>b[i];
    recursion(n,b);
    return 0;
}

