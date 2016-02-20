#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,m,sum;
   cin>>n>>m;
   sum=m+1;
   for(int i=2;i<=n;i++)
   {
        int b;
        cin>>b;
         if(m>b)
         sum+=(m-b+1);
         else if(m<b)
         sum+=(b-m+1);
         else
         sum++;
         m=b;
   }
   cout<<sum+n-1<<endl;
}
