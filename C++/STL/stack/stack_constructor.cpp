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
    stack<int>first;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        first.push(m);
    }
    cout<<first.size()<<endl;
    for(int i=1;i<=n;i++)
    {
        cout<<first.top()<<" ";
        first.pop();
    }
    cout<<first.empty();
    return 0;
}
