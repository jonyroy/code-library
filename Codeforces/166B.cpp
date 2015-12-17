#include<bits/stdc++.h>
using namespace std;
#define N 101000
int status[N],store[N],cn=1;
int Prime_Number()
{
   int i,j,sqrtN=(int)sqrt(N);
   store[cn++]=2;
   for(i=3;i*i<=N;i+=2)
    {
      if(status[i]==0)
        {
          store[cn++]=i;
          for(j=i*i;j<=N;j+=i+i)
          status[j]=1;
        }
    }
    status[1]=1;
    if(i%2==0)
        i++;
    for(int k=i;k<=N;k+=2)
        if(status[k]==0)
        store[cn++]=k;
  return 0;
}
int Binary_search(int val)
{
    int l=1,r=cn;
    int m=(l+r)/2;
    while(l<=r)
    {
        if(store[m]<val)
        l=m+1;
        else if(store[m]==val)
        return val;
        else
        r=m-1;
        m=(l+r)/2;
    }
    return store[l];
}
int main()
{
    Prime_Number();
    int n,m,a[550][550],com=1000000;
    cin>>n>>m;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=0;
        for(int j=1;j<=m;j++)
        {
        cin>>a[i][j];
        if(a[i][j]==0&&a[i][j]%2==1)
        sum+=0;
        else
        {
            int jj=Binary_search(a[i][j]);
            sum+=(jj-a[i][j]);
        }
        }
        com=min(sum,com);
    }
    for(int i=1;i<=m;i++)
    {
        sum=0;
        for(int j=1;j<=n;j++)
        {
        if(a[j][i]==0&&a[j][i]%2==1)
        sum+=0;
        else
        {
            int jj=Binary_search(a[j][i]);
            sum+=(jj-a[j][i]);
        }
        }
        com=min(sum,com);
    }
    cout<<com<<endl;
    return 0;
}
