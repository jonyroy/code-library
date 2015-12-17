#include<bits/stdc++.h>
using namespace std;
#define JO 1000000007
int main()
{
    long int n,a[100005],b[300005];
    a[0]=1,b[0]=1;
    cin>>n;
    for(int i=1;i<=100000;i++)
    {
        a[i]=(7*a[i-1])%JO;
    }
    for(int i=1;i<=300000;i++)
    {
        b[i]=(3*b[i-1])%JO;
    }
    long long int m=3*n-3;
    long long int j=0;
    for(int i=1;i<=n;i++)
    {
        j=j+(a[i-1]*b[m])%JO;
        j=j%JO;
        m=m-3;
    }
    j=j%JO;
    j=(j*20)%JO;
    j=j%JO;
    cout<<j;
    return 0;
}
