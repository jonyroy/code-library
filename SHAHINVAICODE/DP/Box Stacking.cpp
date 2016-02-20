#include<bits/stdc++.h>
using namespace std;

#define ms1(x) memset(x,-1,sizeof(x))

int dp[1000][4],A[1000][4];
int n,start,flgg,next[1000][3][2];
int itarative_call()
{
    int fmax=0,i,j,flg;
    for(i=n;i>0;i--)
    {
        int max=0,nxt=-1;
        for(j=i+1;j<=n-max;j++)
        {
            if(A[j][2]<=A[i][2]&&A[j][3]<=A[i][3]||A[j][3]<=A[i][2]&&A[j][2]<=A[i][3])
            {
            if(max<dp[j][1])
            {
                max=dp[j][1];
                nxt=j;
                flg=1;
            }
           }
           if(A[j][1]<=A[i][2]&&A[j][3]<=A[i][3]||A[j][3]<=A[i][2]&&A[j][1]<=A[i][3])
            {
            if(max<dp[j][2])
            {
                max=dp[j][2];
                nxt=j;
                flg=2;
            }
           }
           if(A[j][2]<=A[i][2]&&A[j][1]<=A[i][3]||A[j][1]<=A[i][2]&&A[j][2]<=A[i][3])
            {
            if(max<dp[j][3])
            {
                max=dp[j][3];
                nxt=j;
                flg=3;
            }
           }
        }
        dp[i][1]=max+A[i][1];
       next[i][1][0]=nxt;
       next[i][1][1]=flg;
        if(fmax<dp[i][1])
        {
            fmax=dp[i][1];
            start=i;
            flgg=1;
        }
        max=0;nxt=-1;

        for(j=i+1;j<=n-max;j++)
        {
            if(A[j][2]<=A[i][1]&&A[j][3]<=A[i][3]||A[j][3]<=A[i][1]&&A[j][2]<=A[i][3])
            {
            if(max<dp[j][1])
            {
                max=dp[j][1];
                nxt=j;
                flg=1;
            }
           }
           if(A[j][1]<=A[i][1]&&A[j][3]<=A[i][3]||A[j][3]<=A[i][1]&&A[j][1]<=A[i][3])
            {
            if(max<dp[j][2])
            {
                max=dp[j][2];
                nxt=j;
                flg=2;
            }
           }
           if(A[j][2]<=A[i][1]&&A[j][1]<=A[i][3]||A[j][1]<=A[i][1]&&A[j][2]<=A[i][3])
            {
            if(max<dp[j][3])
            {
                max=dp[j][3];
                nxt=j;
                flg=3;
            }
           }
        }
        dp[i][2]=max+A[i][2];
        next[i][2][0]=nxt;
       next[i][2][1]=flg;
        if(fmax<dp[i][2])
        {
            fmax=dp[i][2];
            start=i;
            flgg=2;
        }
        max=0;nxt=-1;
        for(j=i+1;j<=n-max;j++)
        {
            if(A[j][2]<=A[i][2]&&A[j][3]<=A[i][1]||A[j][3]<=A[i][2]&&A[j][2]<=A[i][1])
            {
            if(max<dp[j][1])
            {
                max=dp[j][1];
                nxt=j;
                flg=1;
            }
           }
           if(A[j][1]<=A[i][2]&&A[j][3]<=A[i][1]||A[j][3]<=A[i][2]&&A[j][1]<=A[i][1])
            {
            if(max<dp[j][2])
            {
                max=dp[j][2];
                nxt=j;
                flg=2;
            }
           }
           if(A[j][2]<=A[i][2]&&A[j][1]<=A[i][1]||A[j][1]<=A[i][2]&&A[j][2]<=A[i][1])
            {
            if(max<dp[j][3])
            {
                max=dp[j][3];
                nxt=j;
                flg=3;
            }
           }
        }
        dp[i][3]=max+A[i][3];
        next[i][3][0]=nxt;
       next[i][3][1]=flg;
        if(fmax<dp[i][3])
        {
            fmax=dp[i][3];
           start=i;
            flgg=3;
        }

    }
    return fmax;
}

int main()
{
    int i,T,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d%d%d",&A[i][1],&A[i][2],&A[i][3]);
    //A[i][1]=hight,A[i][2]=wight,A[i][3]=dpth
    start=1;
    ms1(dp);
     ms1(next);
   int max=itarative_call();
    cout<<max<<endl;
    cout<<A[start][flgg];
    while(next[start][flgg][0]!=-1)
    {
        s=next[start][flgg][0];
        flgg=next[start][flgg][1];
        cout<<"->"<<A[s][flgg];
        start=s;
        if(flgg<1||flgg>3)
        break;
    }

    return 0;
}


