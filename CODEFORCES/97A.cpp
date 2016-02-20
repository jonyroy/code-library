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
int main()
{
     int n,arr[110];
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         int m;
           cin>>m;
           arr[m]=i;
     }
     for(int i=1;i<=n;i++)
     {
         cout<<arr[i]<<" ";
     }
    return 0;
}
