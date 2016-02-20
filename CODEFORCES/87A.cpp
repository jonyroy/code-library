#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,m=-1,v;
    cin>>n;
    cin>>a>>b;
    v=b;
    m=max(m,v);
for(int i=2;i<=n;i++)
{
    cin>>a>>b;
    v=v-a+b;
    m=max(m,v);
}
cout<<m<<endl;
    return 0;
}
