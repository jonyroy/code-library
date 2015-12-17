#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long m,n;
    cin>>n;
    if(n<=2)
    {
        cout<<n;
        return 0;
    }
    else if(n%2)
    cout<<n*(n-1)*(n-2);
    else if(n%3)
    cout<<(n)*(n-1)*(n-3);
    else
    cout<<(n-1)*(n-2)*(n-3);
    return 0;
}
