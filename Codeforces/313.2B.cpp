#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,a1,a2,b1,b2;
    cin>>a>>b;
    cin>>a1>>b1;
    cin>>a2>>b2;
    int x,y;
    x=a1+a2;
    y=max(b1,b2);
    if((x<=a&&y<=b)||(x<=b&&y<=a))
    {
        cout<<"YES\n";
        return 0;
    }
    x=b1+a2;
    y=max(a1,b2);
    if((x<=a&&y<=b)||(x<=b&&y<=a))
    {
        cout<<"YES\n";
        return 0;
    }
    x=b1+b2;
    y=max(a1,a2);
    if((x<=a&&y<=b)||(x<=b&&y<=a))
    {
        cout<<"YES\n";
        return 0;
    }
    x=a1+b2;
    y=max(a2,b1);
    if((x<=a&&y<=b)||(x<=b&&y<=a))
    {
        cout<<"YES\n";
        return 0;
    }
    cout<<"NO\n";
    return 0;
}
