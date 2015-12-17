#include<iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long llg;
typedef long lg;
typedef pair<int,int> pr;
int main()
{
    double m[10],w[10],hs,hu,a,b,x=500.0,sum=0;
    for(int i=1;i<=5;i++)
    {
        cin>>m[i];
    }
    for(int i=1;i<=5;i++)
    {
        cin>>w[i];
    }
    cin>>hs>>hu;
    for(int i=1;i<=5;i++)
    {
        a=0.3*x;
        b=(1-m[i]/250)*x-50*w[i];
        sum+=max(a,b);
        x+=500;
    }
    sum=sum+100*hs-50*hu;
    cout<<sum<<endl;
    return 0;
}
