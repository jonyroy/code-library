#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    long long int n,d,L[100100],coun=0;
    scanf("%lld%lld",&n,&d);
    for(long i=1;i<=n;i++)
        scanf("%lld",&L[i]);
    sort(L+1,L+n+1);
    for(long int i=1;i<n;i++)
    {
        if(L[i+1]-L[i]<=d)
        {
            coun++;
            i++;
        }
    }
    printf("%lld\n",coun);
    return 0;
}
