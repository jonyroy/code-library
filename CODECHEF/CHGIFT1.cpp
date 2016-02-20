#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<functional>
#include<cmath>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<cstring>
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
    long int T;
    long int n,a[100],b;
    scanf("%ld",&T);
    while(T--)
    {
        int cou=0;
        long s=100000000;
        scanf("%ld",&n);
        if(n==1)
        {
            int m;
            scanf("%d",&m);
            printf("%d\n",m);
            continue;
        }
        for(int i=1;i<=n;i++)
            {
        scanf("%ld",&a[i]);
        if(a[i]<0)
            cou++;
            }
         b=a[1]*a[2];
        long int c=a[1]-a[2];
        b=min(b,c);
        c=a[1]+a[2];
        b=min(b,c);
        for(int i=3;i<=n;i++)
        {
            long int c=b*a[i];
            long int d=b+a[i];
            long int e=b-a[i];
            b=min(c,min(d,e));
        }
        if(cou%2){
                s=1;
            for(int i=1;i<=n;i++)
        {
            if(a[i]!=0)
                s=s*a[i];
        }
        }
        printf("%ld\n",min(s,b));
    }
    return 0;
}
