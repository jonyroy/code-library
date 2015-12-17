#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,b;
    cin>>n;
    if(n%2==0)
    {
        m=n/2;
        b=m;
    }
    else
    {
        m=n/2;
        b=m+1;
    }
    m=2*((m*(m+1))/2);
    b=b*b;
    cout<<m-b<<endl;
    return 0;
}
