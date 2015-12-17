#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n,R,r,PI=3.14159265359;
    cin>>n>>R>>r;
    if(n==1.0)
    {
        if(r<=R)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    else
    {
        float m=PI/asin(r/(R-r));
        if(m>=n)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
