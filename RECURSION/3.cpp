#include<bits/stdc++.h>
using namespace std;
int sum=0;
int recursion(int n,int x)
{
   if(n==0)
   return 1;
   int m=(int)pow(x,n)+recursion(n-1,x);
   return m;
}
int main()
{
    int n,x;
    cin>>n>>x;
    int m=recursion(n-1,x);
    cout<<m<<endl;
    return 0;
}
