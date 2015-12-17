#include<bits/stdc++.h>
using namespace std;
int PolyNomial(int i,int n)
{
    if(i>n)
    return 0;
    if(i==1)
        cout<<1<<" ";
    else if(i==2)
        cout<<" + x";
    else
        cout<<" + x^"<<i-1;
    PolyNomial(i+1,n);
    return 0;
}
int main()
{
    int n;
    cin>>n;
    PolyNomial(1,n);
    return 0;
}
