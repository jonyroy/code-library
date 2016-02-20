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
    int n,c=0;
    cin>>n>>str;
    for(int i=0;i<n-1;i++)
    {
        if(str[i]==str[i+1])
            c++;
    }
    cout<<c<<endl;
}
