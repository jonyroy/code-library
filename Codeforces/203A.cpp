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
    int n,m,a[105],b[105];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int mn=a[0]*2;
    if(mn<=a[n-1])
        mn=a[n-1];
    if(mn>=b[0])
        cout<<"-1\n";
    else
        cout<<mn<<endl;
    return 0;
}
