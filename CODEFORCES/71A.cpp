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
    string str;
    int n;
    cin>>n;
    while(n--)
    {
    cin>>str;
    int len=str.size();
    (len>10)?cout<<str[0]<<len-2<<str[len-1]:cout<<str;
    cout<<endl;
    }
    return 0;
}
