#include<bits/stdc++.h>
using namespace std;
long long int bncc(long long int a,long long int b,long long int c)
{

}
int main()
{
    long long int n;
    long long int mi=1000000000000000000,ma=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            long long int a=n/i;
            long long int b=i;
            mi=min(mi,(a+2)*(b+2)*2);
            mi=min(mi,(a+1)*(b+2)*3);
            mi=min(mi,(a+2)*(b+1)*3);
            for(int j=2;j<=sqrt(a);j++)
            {
                if(a%j==0)
                {
                    long long int f,g,h;
                    f=a/j;
                    g=j;
                    h=b;
                    mi=min(mi,(f+1)*(g+2)*(h+2));
                    mi=min(mi,(g+1)*(f+2)*(h+2));
                    mi=min(mi,(h+1)*(g+2)*(f+2));
                }
            }
            for(int j=2;j<=sqrt(b);j++)
            {
                if(b%j==0)
                {
                    long long int f,g,h;
                    f=b/j;
                    g=j;
                    h=a;
                    mi=min(mi,(f+1)*(g+2)*(h+2));
                    mi=min(mi,(g+1)*(f+2)*(h+2));
                    mi=min(mi,(h+1)*(g+2)*(f+2));
                }
            }
        }
    }
    mi=min(mi,(n+1)*9);
    mi=min(mi,(n+2)*6);
    ma=max(ma,(n+1)*9);
    ma=max(ma,(n+2)*6);
    cout<<mi-n<<" "<<ma-n<<endl;
    return 0;
}
