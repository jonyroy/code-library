#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int n,x,y;
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>n;
    long long int m=(long long int)sqrt(n);
    if((m*m)!=n)
        m=m+1;
        long long int a=(m*m-n)+1;
        long long int b=(2*m-1)/2+1;
        if(m%2==0)
        {

            if(a<=b)
            {
                x=m;
                y=a;
            }
            else
            {
                x=((2*m-1)-a)+1;
                y=m;
            }
        }
        else
        {
          if(a<=b)
          {
              x=a;
              y=m;
          }
          else
          {
              x=m;
              y=((2*m-1)-a)+1;
          }
        }
        printf("Case %d: %lld %lld\n",i,x,y);
    }
    return 0;
}

