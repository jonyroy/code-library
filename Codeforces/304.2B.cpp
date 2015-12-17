#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    map<int,int>a;
    int b[3005];
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        a[b[i]]++;
    }
    for(int i=1;i<=n;i++)
    {
       bool test=false;
       int m=a[b[i]];
       for(int j=1;j<m;j++)
       {
         int cnt=b[i]+1;
         while(1)
         {
             if(a[cnt]==0)
             {
                 a[cnt]++;
                 sum+=(cnt-b[i]);
                 break;
             }
             cnt++;
         }
         test=true;
       }
       if(test)
        a[b[i]]=1;
    }
    cout<<sum<<endl;
    return 0;
}
