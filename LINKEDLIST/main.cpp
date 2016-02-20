#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;
int main()
{
     int info[1000],link[1000];
     int start=1;
     for(int i=1;i<1000;i++)
        link[i]=i+1;
        int n;
        cin>>n;
        int a,p,avail=1,b=start;
        for(int i=1;i<=n;i++)
        {
              int m;
              cin>>m;
              a=link[b];
              info[a]=m;
              p=link[a];
              b=a;
              link[a]=start;
        }
    return 0;
}
