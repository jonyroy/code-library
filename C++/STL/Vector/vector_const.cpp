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
    vector<int>v;
    vector<int>s(4,100);
    vector<int>third(s.begin(),s.end());
    vector<int>fourth(s);
    int len=fourth.size();
    cout<<len<<endl;
    for(int i=0;i<len;i++)
    cout<<fourth[i]<<endl;
    return 0;
}
