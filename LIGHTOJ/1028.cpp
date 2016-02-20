/*
* Author: Jony Roy
* Date: 05-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
vector<long int> primeStore;
int primeFinder()
{
    bitset<1000001>checkPrime;
    long int len=sqrt(1000000);
    for(int i=3;i<=len;i+=2)
    {
        if(!checkPrime[i])
        {
            for(long int j=i*i;j<=1000000;j+=i)
                checkPrime[j]=1;
        }
    }
    primeStore.push_back(2);
    for(long int i=3;i<=1000000;i+=2)
    {
        if(!checkPrime[i])
        primeStore.push_back(i);
    }
    return primeStore.size()-1;
}
int main()
{
    long int TestCase;
    long int len=primeFinder();
    scanf("%ld",&TestCase);
    for(long int i=1;i<=TestCase;i++)
    {
        long long int inputNumber,answer=1;
        scanf("%lld",&inputNumber);
        long int ln=sqrt(inputNumber);
        for(long int j=0;primeStore[j]<=ln&&j<=len;j++)
        {
            long counter=0;
            if(inputNumber==1)
            break;
            while(inputNumber%primeStore[j]==0)
            {
                counter++;
                inputNumber=inputNumber/primeStore[j];
            }
            answer*=(counter+1);
            ln=sqrt(inputNumber);
        }
        if(inputNumber>1)
            answer*=2;
        printf("Case %ld: %lld\n",i,answer-1);
    }
    return 0;
}
