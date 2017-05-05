/*
* Author: Jony Roy
* Date: 22-02-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

uint bitcounter(uint m)
{
	int a=CountBit(m);
	m++;
	while(1)
	{
        if(CountBit(m)==a)
        return m;
        m++;
	}
}
int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
       uint m;
       scanf("%u",&m);
       printf("Case %d: ", i);
       	 uint c=m;
       	 int counter=0;
       	 while(c%2==0)
       	 {
       	 	counter++;
       	 	c=c>>1;
       	 }
       	 int co=0;
       	 while(c%2==1)
       	 {
       	 	co++;
       	 	c=c>>1;
       	 	m &= ~(1<<counter);
       	 	counter++;
       	 }
       	 m |= (1<<counter);
       	 m |= (((1<<(co-1))-1));
       	 printf("%u\n",m);
       }
    return 0;
}