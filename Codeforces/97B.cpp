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
typedef long long LL;
int main()
{
    int a, c;
    while ( cin >> a >> c )
        {
        vector<int> va, vb, vc;
        while (a || c)
        {
            va.push_back(a % 3);
            a /= 3;
            vc.push_back(c % 3);
            c /= 3;
        }
        for (int i = 0; i < va.size(); i++)
        {
            vb.push_back( (vc[i] + 3 - va[i]) % 3 );
        }
        LL r = 0;
        for (int i = vb.size() - 1; i >= 0; i--)
        {
            r = r * 3 + vb[i];
        }
        cout << r << endl;
    }
}
