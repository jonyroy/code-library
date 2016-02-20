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
long long int power(long long int b)
{
    long long int c=1;
      if(b==0)
        return 1;
    for(int i=1;i<=b;i++)
    {
        c=c*3;
    }
    return c;
}
int main()
{
    long long int a,b,c,r;
   vector<int>v1,v2,v3;
    while(cin>>a>>c)
    {
        while(a||c)
        {
            v1.push_back(a%3);
            a/=3;
            v2.push_back(c%3);
            c/=3;
        }
        for(int i=v1.size()-1;i>=0;i--)
        {
                if(v1[i]==v2[i])
                v3.push_back(0);
                else if(v1[i]==0)
                v3.push_back(v2[i]);
                else if(v1[i]==1&&v2[i]==0)
                v3.push_back(2);
                else if(v1[i]==2&&v2[i]==0)
                v3.push_back(1);
                else if(v1[i]==1&&v2[i]==2)
                v3.push_back(1);
                else if(v1[i]==2&&v2[i]==1)
                v3.push_back(2);
        }
        r=0;
        int n=v3.size()-1;
        for(int i=0;i<v3.size();i++)
        {
            long long int m=power(i);
            r=r+(m*v3[n--]);
        }
        cout<<r<<endl;
        v1.clear();
        v2.clear();
        v3.clear();
    }
    return 0;
}
