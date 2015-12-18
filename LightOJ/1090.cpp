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
    lint power[10];
    power[0]=1;
    for(int i=1;i<10;i++)
    power[i]=5*power[i-1];
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
        llint cc=0;
        while(p%10==0)
        {
            cc++;
            p/=10;
        }
        cc=cc*q;
        cc+=a;
        printf("Case %ld: %ld\n",i,cc);
    }
    return 0;
}
