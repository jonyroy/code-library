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

char str[100]={0};
int lef[100];
int righ[100];
using namespace std;
int traverse(int start)
{
    if(start==0)
    return 0;
    traverse(lef[start]);
    traverse(righ[start]);
    cout<<str[start]<<endl;
    return 0;
}
int main()
{
    int n,start=5;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char s;
        int b,c;
        cin>>s>>b>>c;
        str[i]=s;
        lef[i]=b;
        righ[i]=c;
    }
    traverse(start);
    return 0;
}
