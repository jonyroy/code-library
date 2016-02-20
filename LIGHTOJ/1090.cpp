/*
* Author: Jony Roy
* Date: 09-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
int main()
{
    lint n,c,p,q;
    lint power[10],twoPower[25];
    power[0]=1;
    twoPower[0]=1;
    for(int i=1;i<10;i++)
    power[i]=5*power[i-1];
    for(int i=1;i<=20;i++)
    twoPower[i]=2*twoPower[i-1];
    lint TestCase;
    scanf("%ld",&TestCase);
    for(lint i=1;i<=TestCase;i++)
    {
        scanf("%ld%ld%ld%ld",&n,&c,&p,&q);
        int a=0,aa=0,aaa=0;
        for(int j=1;j<=9;j++)
        {
           a+=(n/power[j]);
           aa+=(c/power[j]);
           aaa+=((n-c)/power[j]);
        }
        a=a-(aa+aaa);
        int b=0,bb=0,bbb=0;
        for(int j=1;j<=20;j++)
        {
           b+=(n/twoPower[j]);
           bb+=(c/twoPower[j]);
           bbb+=((n-c)/twoPower[j]);
        }
        b=b-(bb+bbb);
        lint cc=0,two=0,five=0;
        lint m=p;
        while(m%2==0)
        {
            two++;
            m/=2;
        }
        m=p;
        while(m%5==0)
        {
            five++;
            m/=5;
        }
        two=two*q+b;
        five=five*q+a;
        printf("Case %ld: %ld\n",i,min(two,five));
    }
    return 0;
}
