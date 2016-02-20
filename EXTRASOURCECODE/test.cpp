#include<bits/stdc++.h>
using namespace std;
long long int prime[2000000];
long long int PrimeNumber()
{
    for(int i=3;i<=sqrt(2000000);i+=2)
    {
        if(prime[i]==0)
        for(int j=i*i;j<=2000000;j+=i)
            prime[j]=1;
    }
    long long int sum=2;
    for(int i=3;i<=2000000;i+=2)
        if(prime[i]==0)
        sum+=i;
    return sum;
}
int main()
{
    cout<<PrimeNumber()<<endl;
    return 0;
}
