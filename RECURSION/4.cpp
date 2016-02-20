#include<bits/stdc++.h>
using namespace std;
int sum=0;
int recursion(int n)
{
   if(n==0)
   return 1;
   int m=n*recursion(n-1);
   return m;
}
int main()
{
    int n,x;
    cin>>n;
    int m=recursion(n);
    cout<<m<<endl;
    return 0;
}

