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
    int n,k;
    string  str;
    cin>>n>>k;
    int coun,c=0;
    while(n--)
    {
        coun=0;
        cin>>str;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]=='4'||str[i]=='7')
                coun++;
        }
        if(coun<=k)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
