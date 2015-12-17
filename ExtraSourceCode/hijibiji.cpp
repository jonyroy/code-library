#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
   float n,m,a,sum=0,count=0;
   while(cin>>n>>m)
   {
    sum=sum+(m*1000)/n;
    count++;
   }
   cout<<sum/count<<endl;
   return 0;
}
