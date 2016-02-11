/*
* Author: Jony Roy
* Date: 07-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
lint findZero(lint n)
{
    lint powerOfFive[]= {5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625};
    lint sum=0;
    for(int i=0; i<=11; i++)
        sum+=(n/powerOfFive[i]);
    return sum;
}
int main()
{
    int TestCase;
    scanf("%d",&TestCase);
    int tc=1;
    while(TestCase--)
    {
        lint m,ans,ok=0;
        scanf("%ld",&m);
        lint low=5,high=400000015,mid;
        while(low<high)
        {
            ans=findZero(high);
            if(ans==m)
            {
                ok=1;
                mid=high;
                break;
            }
            ans=findZero(low);
            if(ans==m)
            {
                ok=1;
                mid=low;
                break;
            }
            lint jony=low+high;
            jony/=2;
            if(jony%5)
            {
                mid=(low+high-5)/2;
                low=low-5;
            }
            else
                mid=(low+high)/2;

            ans=findZero(mid);
            if(ans==m)
            {
                ok=1;
                break;
            }
            else if(ans>m)
            {
                high=mid-5;
            }
            else
            {
                low=mid+5;
            }
        }
        if(ok)
            printf("Case %d: %ld\n",tc,mid);
        else
            printf("Case %d: impossible\n",tc);
        tc++;
    }
    return 0;
}
