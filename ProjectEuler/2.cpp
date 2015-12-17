#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int f[1000],sum=0,i=3;
    f[1]=1,f[2]=2;
    bool t=false;
    while((f[i-1]+f[i-2])<=4000000)
    {
        f[i]=f[i-1]+f[i-2];
        i++;
    }
    i--;
    for(int j=2;j<=i;j++)
        {
            if(f[j]%2==0)
            sum+=f[j];
        }
    cout<<sum;
    return 0;
}
