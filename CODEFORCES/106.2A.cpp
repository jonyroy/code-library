#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,sum=0;
     int a[15];
     cin>>n;
     for(int i=0;i<12;i++)
     {
         cin>>a[i];
     }
     sort(a,a+12);
     int s=0,cnt=0,i;
     bool test=true;
     for(i=11;i>=0;i--)
     {
          if(s>=n){
          break;}
         s+=a[i];
         ++cnt;
     }
     //cout<<i<<endl;
     if(i>=0||s>=n)
     cout<<cnt<<endl;
     else
     cout<<"-1";
}

