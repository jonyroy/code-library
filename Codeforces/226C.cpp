#include<bits/stdc++.h>
using namespace std;
int status[3210]={0};
vector<int>store;
int prime()
{
   int i,j;
   store.push_back(2);
   for(i=3;i*i<=60;i+=2)
    {
      if(status[i]==0)
        {
            store.push_back(i);
          for(j=i*i;j<=3200;j+=i+i)
             status[j]=1;
        }
    }
    for(int k=i;k<=3150;k++)
    {
        if(status[k]==0)
        store.push_back(k);
    }
    return 0;
}
int main()
{
    store.resize(3210);
    prime();
    cout<<store.size();
    int n,m,a,b[1005];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
    }
    return 0;
}
