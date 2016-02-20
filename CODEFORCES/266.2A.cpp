#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,sum;
    cin>>n>>m>>a>>b;
    if(((double)b/(double)m)>=a)
        sum=n*a;
    else
    {
        sum=(n/m)*b+(n%m)*a;
        if(n%m)
        sum=min(sum,((n/m)+1)*b);
    }
    cout<<sum<<endl;
    return 0;
}
