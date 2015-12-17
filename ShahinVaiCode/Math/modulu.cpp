#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;
int mod(int a,int b,int p)//(a^b)%p
{
    if(b==0)
    return 1;
    int x=mod(a,b/2,p);
    x=(x*x)%p;
    if(b%2==1)
    x=(x*a)%p;
    return x;
}
int main()
{
    int a,b,p,x;
    while(scanf("%d%d%d",&a,&b,&p)!=EOF)
    {
        x=mod(a,b,p);
        printf("%d\n",x);
    }

    return 0;
}
