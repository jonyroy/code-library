#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    long long int x[1005];
    cin>>n>>m>>k;
    for(int i=1;i<=m+1;i++)
        cin>>x[i];
        int cnt=0,cn=0;
    for(int i=1;i<=m;i++)
    {
        cnt=0;
        long long int b=x[i],c=x[m+1];
        while(b|c)
        {
            if((b%2==1&&c%2==0)||(b%2==0&&c%2==1))
                cnt++;
                c=c/2;
                b=b/2;
        }
        if(cnt<=k)
            cn++;
    }
    cout<<cn<<endl;
    return 0;
}
