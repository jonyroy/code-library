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
long int first[1000005],second[1000005];
int main()
{
    long int n,m;
    vector<long>::iterator it;
    while(1)
    {
        scanf("%ld%ld",&n,&m);
        vector<long>v(2000005);
        if(n==0&&m==0)
        break;
        for(long i=0;i<n;i++)
        scanf("%ld",&first[i]);
        for(long i=0;i<m;i++)
        scanf("%ld",&second[i]);
        it=set_intersection(first,first+n+1,second,second+m+1,v.begin());
        v.resize(it-v.begin());
        long int nm=v.size();
        printf("%ld\n",nm);
    }
    return 0;
}
