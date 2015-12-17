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
 int f[100];
int F(int n)
{
    if(n<2)
        return n;
    if(f[n]>0)
        return f[n];
    return f[n]=F(n-1)+F(n-2);
}
int main()
{
int n;
cin>>n;
F(n);
cin>>n;
cout<<f[n]<<endl;
return 0;
}
