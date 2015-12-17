#include<bits/stdc++.h>
using namespace std;
long long int bigMod(long long int a,long long int b,long long int M)
{
    if(b==0)
    return 1%M;
    long long int x=bigMod(a,b/2,M);
    x=(x*x)%M;
    if(b%2==1)
    x=(x*a)%M;
    return x;
}
int main()
{
   long long int a,b,M;
   while(cin>>a>>b>>M)
   {
       cout<<bigMod(a,b,M);
   }
   return 0;
}
