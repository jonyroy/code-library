#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long cnt1,cnt2,x,y,sum=0;
    cin>>cnt1>>cnt2>>x>>y;
    sum=cnt1+cnt2;
    for(long long int i=sum;;i++)
    {
        long long a=i/x;
        long long b=i/y;
        long long c=i/(x*y);
        a-=c;
        b-=c;
        long long int cnt=i-(a+b)-c;
        if(a<cnt2)
            a=cnt2-a;
        else
            a=0;
        if(b<cnt1)
            b=cnt1-b;
        else
            b=0;
        if(cnt>=(a+b))
        {
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
