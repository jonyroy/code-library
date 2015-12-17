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
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        if(m<=10)
            cout<<"0 "<<m<<endl;
        else
            cout<<"10 "<<m-10<<endl;
    }
    return 0;
}

