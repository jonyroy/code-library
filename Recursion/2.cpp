#include<bits/stdc++.h>
using namespace std;
int sum=0;
int recursion(int n)
{
   if(n==0)
   return 0;
   recursion(n-1);
   if(n==1)
    cout<<"1";
   else
    cout<<"+x^"<<n;
   return 0;
}
int main()
{
    int n,b[100];
    cin>>n;
//    for(int i=1;i<=n;i++)
//        cin>>b[i];
    recursion(n);
    return 0;
}

