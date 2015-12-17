#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,m,b[105],c[105]={0};
     queue<int>a;
     cin>>n>>m;
     for(int i=1;i<=n;i++){
     cin>>b[i];
     a.push(i);
     }
     int po;

     while(!a.empty())
     {
         po=a.front();
         if(m+c[po]>=b[po]){
         a.pop();
         }
         else{
         c[po]+=m;
         po=a.front();
         a.pop();
         a.push(po);
         }
     }
     cout<<po;
}
