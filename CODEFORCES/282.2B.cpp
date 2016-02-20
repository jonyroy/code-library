#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,cnt=0;
    cin>>n>>m;

    if(n-m==0)
    {
        cout<<"infinity\n";
        return 0;
    }
    else if(n<m)
    {
        cout<<"0\n";
        return 0;
    }
    n=n-m;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n==i*i&&i>m)
            cnt++;
        else if(n%i==0)
        {
            if(i>m)
            cnt++;
            if(n/i>m)
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}
