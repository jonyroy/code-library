/*
* Author: Jony Roy
* Date: 05-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int N,base,TestCase;
    double a[1000005]={0};
    scanf("%lld",&TestCase);
    for(long long int i=2;i<=1000000;i++)
    a[i]=a[i-1]+log10((double)i);
    for(long long int i=1;i<=TestCase;i++)
    {
        scanf("%lld%lld",&N,&base);
        long long int M=a[N]/log10((double)base)+1;
        printf("Case %lld: %lld\n",i,M);
    }
    return 0;
}
