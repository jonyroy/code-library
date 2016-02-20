#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int m=max(a*b,a+b);
    m=max(m*c,m+c);
    int n=max(b*c,b+c);
    n=max(n*a,n+a);
    cout<<max(m,n);
    return 0;
}
