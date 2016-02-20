/*
* Author: Jony Roy
* Date: 03-02-2016
* Contact:jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
#define MM 5000005
unsigned long long int primeStore[MM];
bitset<MM> checkPrime;
int PrimeFactor()
{
    for(unsigned long long int i=2;i<=5000000;i++)
    primeStore[i]=i;
    int len=sqrt(MM);
    for(int i=2;i<=2500000;i++)
    {
      if(!checkPrime[i])
      {
          for(long int j=i;j<=5000000;j+=i)
            {
              checkPrime[j]=1;
              primeStore[j]=primeStore[j]*(i-1);
              primeStore[j]=primeStore[j]/i;
            }
      }
    }
    primeStore[0]=0;
    primeStore[1]=0;
    primeStore[2]=1;
    primeStore[3]=5;
    for(long int i=4;i<=5000000;i++)
    {
        if(i%2&&checkPrime[i]==0&&primeStore[i]==i)
            primeStore[i]=i-1;
        primeStore[i]=primeStore[i-1]+primeStore[i]*primeStore[i];
    }
    return 1;
}
int main()
{
    long int Testcase;
    PrimeFactor();
    scanf("%ld",&Testcase);
    for(long int i=1;i<=Testcase;i++)
    {
        long int a,b;
        scanf("%ld%ld",&a,&b);
        printf("Case %ld: %llu\n",i,primeStore[b]-primeStore[a-1]);
    }
    return 0;
}
