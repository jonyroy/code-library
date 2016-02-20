#include<bits/stdc++.h>
using namespace std;

#define ms1(x) memset(x,-1,sizeof(x))

int A[1000],n,start;
int dp[1000],next[1000];

int Call(int i)
{
    if(i>n)
    return 0;
    if(dp[i]!=-1)
    return dp[i];
    int max=0,T,nxt=-1;
    for(int j=i+1;j<=n;j++)
    {
        if(A[j]>=A[i])
        {
            T=Call(j);
            if(T>max)
            {
                max=T;
                nxt=j;
            }
        }
    }
    next[i]=nxt;
    dp[i]=1+max;

    return dp[i];
}
int itarative_call()
{
    int fmax=0,i,j;
    for(i=n;i>0;i--)
    {
        int max=0,nxt=-1;
        for(j=i+1;j<=n-max;j++)
        if(A[j]>A[i])
        {
            if(max<dp[j])
            {
                max=dp[j];
                nxt=j;
            }
        }
        dp[i]=max+1;
        if(dp[i]>fmax)
        {
            fmax=dp[i];
            start=i;
        }
        next[i]=nxt;
    }
    return fmax;
}

int main()
{
    int i,T;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&A[i]);
    start=1;
    ms1(dp);
    int max=0;
    /*for(i=1;i<=n;i++)
    {
        T=Call(i);
        if(T>max)
        {
            max=T;
            start=i;
        }
    }*/
    max=itarative_call();
    cout<<max<<endl;
    cout<<A[start]<<" ";
    while(next[start]!=-1)
    {
        start=next[start];
        cout<<A[start]<<" ";
    }

    return 0;
}


