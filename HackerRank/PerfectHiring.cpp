#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,p,x,a,ma=-1,j=0,m;
    cin>>n>>p>>x;
    for(long int i=1;i<=n;i++)
    {
        cin>>a;
        m=p*a;
        p=p-x;
        if(m>ma)
        {
            ma=m;
            j=i;
        }
    }
    cout<<j<<endl;
    return 0;
}
