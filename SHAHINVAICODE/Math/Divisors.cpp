#include <cstring>
#include <map>
#include <deque>
#include <queue>
#include <stack>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <set>
#include <complex>
#include <list>
#include <climits>
#include <cctype>

using namespace std;

vector<pair<int, int> > factors;
void getFactors(int n)
{
    factors.clear();
    int d = 1;
    for (int i = 2; i * i <= n; i += d, d = 2)
        if (n % i == 0)
        {
            factors.push_back(make_pair(i, 0));
            while (n % i == 0)
            {
                n /= i;
                factors.back().second++;
            }
        }
    if (n != 1)
        factors.push_back(make_pair(n, 1));
}

vector<int> divisors;
void getDivisors(int ind = 0, int res = 1)
 {
        if (ind == (int) factors.size())
        {
                divisors.push_back(res);
                return;
        }
        for (int i = 0; i <= factors[ind].second; i++)
        {
                getDivisors(ind + 1, res);
                res *= factors[ind].first;
        }
}

int main()
{
    int a, b, n,i;
    scanf("%d", &a);
    getFactors(a);
    getDivisors();
    n=divisors.size();
    cout<<"Number of divisors: "<<n<<endl;
    for(i=0;i<n;i++)
    cout<<divisors[i]<<" ";
        return 0;
}
