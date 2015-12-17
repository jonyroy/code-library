#include<set>
#include<list>
#include<map>
#include<stack>
#include<bitset>
#include<ctime>
#include<string>
#include<deque>
#include<queue>
#include<cstdio>
#include<cmath>
#include<utility>
#include<vector>
#include<cstdlib>
#include<cstring>
#include<cstring>
#include<cassert>
#include<fstream>
#include<sstream>
#include<complex>
#include<iostream>
#include<stdbool.h>
#include<algorithm>
#include<functional>
using namespace std;
int main()
{
    int n;
    int a[15],b[15];
    int t=1;
    while(1)
    {
       scanf("%d",&n);
       if(n<0)
        break;
       for(int i=1;i<=12;i++)
        scanf("%d",&a[i]);
       for(int i=1;i<=12;i++)
        scanf("%d",&b[i]);
        printf("Case %d:\n",t);
        for(int i=1;i<=12;i++)
        {
            if(b[i]<=n){
                printf("No problem! :D\n");
                n=n-b[i];
            }
            else
                printf("No problem. :(\n");
                n=n+a[i];
        }
        t++;
    }
    return 0;
}
