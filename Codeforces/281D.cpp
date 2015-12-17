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
    long long int n;
    vector<long>v;
    cin>>n;
    v.resize(n+3);
    for(int i=0;i<n;i++)
        scanf("%ld",&v[i]);
    sort(v.begin(),v.end());
    n=v.size();
    long long int m=v[n-2]^v[n-3];
    cout<<m<<endl;
    return 0;
}
