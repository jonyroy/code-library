#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    a=a+b+c+d+e;
    if(a%5||a/5==0)
        cout<<"-1";
    else
        cout<<a/5;
    return 0;
}
