#include<bits/stdc++.h>
using namespace std;
const int N=108;
int a[N],b[N],f[N][3];
int maxx(int x,int y)
{
    if(x>y)y=x;
    return y;
}
int main(void)
{
    int i,k,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&k);
        if(k>=2)a[i]=1;
        if(k%2)b[i]=1;
    }
    f[1][0]=0;
    f[1][1]=a[1];
    f[1][2]=b[1];
    for(i=2; i<=n; i++)
    {
        f[i][0]=maxx(maxx(f[i-1][0],f[i-1][1]),f[i-1][2]);
        if(a[i])
            f[i][1]=maxx(f[i-1][0]+1,f[i-1][2]+1);
        if(b[i])
            f[i][2]=maxx(f[i-1][0]+1,f[i-1][1]+1);
    }
    cout<<n-maxx(f[n][0],maxx(f[n][1],f[n][2]));
    return 0;
}
