#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n=600851475143,temp=1;
    bool t=false;
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
            {
            n/=i;
            t=true;
            }
            if(t)
            {
                temp=i;
                t=false;
            }
    }
    if(n>temp)
        temp=n;
    cout<<temp;
    return 0;
}
