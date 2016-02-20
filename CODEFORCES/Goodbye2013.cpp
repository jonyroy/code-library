#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,sum=0;
    cin>>a>>b;
    while(a>=b)
    {
        sum+=b;
        a=a-b+1;
    }
    sum+=a;
    cout<<sum<<endl;
    return 0;
}
