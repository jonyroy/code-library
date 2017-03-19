#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int cnt=0;
    int prime[79000];
    prime[0]=2;
    bitset<1000005> status;
    for(int i=3; i<=1000; i+=2)
    {
        if(!status[i])
            for(int j=i*i; j<=1000000; j+=i)
                status[j]=1;
    }
    for(int i=3; i<=1000000; i+=2)
        if(!status[i])
        {
            cnt++;
            prime[cnt]=i;
        }
    int ans[1000005];
    ans[1]=0;
    for(int i=2; i<=1000000; i++)
    {
        int sum=0;
        int sq=sqrt(i);
        int m=i;
        for(int j=0;prime[j]<=sq && j<=cnt;j++)
        {
             while(m%prime[j]==0)
             {
                 m/=prime[j];
                 sum++;
             }
             sq=sqrt(m);
        }
        if(m>1)
            sum++;
            ans[i]=ans[i-1]+sum;
    }
    while(cin>>n)
    cout<<ans[n]<<endl;
    return 0;
}
