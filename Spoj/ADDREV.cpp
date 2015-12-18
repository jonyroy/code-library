/*
  Date:30-12-2015
  Created By Jony Roy
  Be Happy & Enjoy The Moment.
*/
#include<bits/stdc++.h>
using namespace std;
long long int ReverseNum(long long int n)
{
    bool test=false;
    long long int m=0;
    while(n)
    {
        long long int a=n%10;
        n=n/10;
        if(a)
        {
            test=true;
        }
        if(test)
        {
           m=m*10+a;
        }
    }
    return m;
}
int main()
{
    long long int n;
    cin>>n;
    for(long long int i=1;i<=n;i++)
    {
        long long int a,b;
        scanf("%lld%lld",&a,&b);
        a=ReverseNum(a);
        b=ReverseNum(b);
        a+=b;
        b=ReverseNum(a);
        printf("%lld\n",b);
    }
    return 0;
}
