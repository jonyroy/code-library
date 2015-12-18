/*
* Author: Jony Roy
* Date:05-02-2016
* Contact:jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string number;
    int TestCase;
    long long int divisor,remainder;
    cin>>TestCase;
    for(int i=1;i<=TestCase;i++)
    {
        cin>>number>>divisor;
        int len=number.length();
        len--;
        remainder=0;
        if(divisor<0)
            divisor=(-1)*divisor;
        int j=0;
        if(number[0]=='-')
            j=1;
        for(;j<=len;j++)
        {
           remainder*=10;
           remainder+=(number[j]-48);
           remainder=remainder%divisor;
        }
        if(remainder)
            printf("Case %d: not divisible\n",i);
        else
            printf("Case %d: divisible\n",i);
    }
    return 0;
}
