#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,s;
    cin>>a>>b>>s;
    if(a<0)
        a=a*(-1);
    if(b<0)
        b=b*(-1);
    long long int c=a+b;
    if((s%2==1&&c%2==1)||(s%2==0&&c%2==0))
    {
        if(s>=c)
        cout<<"Yes\n";
        else
        cout<<"No\n";
    }
    else
        cout<<"No\n";
    return 0;
}
