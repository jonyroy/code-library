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
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
#include <utility>
using namespace std;
int main()
{
    vector<int>n;
    int m;
    while(cin>>m)
    {
        n.push_back(m);
    }
    int len=n.size();
    int em=n.empty();//On success empty() return 0
    n.pop_back();
    int l=n.size();
    cout<<len<<"   "<<l<<"  "<<em<<endl;
    return 0;
}
