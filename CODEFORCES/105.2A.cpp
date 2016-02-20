#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b,c,d,n,cnt=0;
    int m[100005]={0};
    cin>>a>>b>>c>>d>>n;
    for(int i=a;i<=n;i+=a)
        m[i]=1;
    for(int i=b;i<=n;i+=b)
        m[i]=1;
    for(int i=c;i<=n;i+=c)
        m[i]=1;
    for(int i=d;i<=n;i+=d)
        m[i]=1;
    for(int i=1;i<=n;i++)
        if(m[i])
        cnt++;
    cout<<cnt<<endl;
    return 0;
}
