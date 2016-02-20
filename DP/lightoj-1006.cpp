#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
long int a,b,c,d,e,f,save[10050];
long  int F(int n)
{
    if(n==0)return a;
    if(n==1)return b;
    if(n==2)return c;
    if(n==3)return d;
    if(n==4)return e;
    if(n==5)return f;
    if(save[n]>-1)
        return save[n];
    return save[n]=(F(n-1)%10000007+F(n-2)%10000007+F(n-3)%10000007+F(n-4)%10000007+F(n-5)%10000007+F(n-6)%10000007)%10000007;
}
int main()
{
        int T,n;
        scanf("%d",&T);
        int j=1;
        while(j<=T)
        {
            scanf("%ld %ld %ld %ld %ld %ld %ld", &a, &b, &c, &d, &e, &f, &n);
            for(int i=0;i<n+5;i++)
             save[i]=-1;
            printf("Case %d: %ld\n", j, F(n));
            j++;
        }
    return 0;
}
