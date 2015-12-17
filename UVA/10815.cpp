//Accepted
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

#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define OR ||
#define AND &&
#define P printf
#define S scanf
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    string s,str;
    set<string>v;
    set<string>::iterator it;
    int j;
    while(cin>>s)
    {
        int len=s.size();
        j=0;
        for(int i=0;i<len;i++)
        {
            if(isalpha(s[i]))
            {
            if(s[i]>=65&&s[i]<=90)
                {
                  s[i]+=32;
                  str.insert(j,1,s[i]);
                  j++;
                 }
                 else
                 {
                     str.insert(j,1,s[i]);
                     j++;
                 }
            }
            else
            {
                int le=str.size();
                if(le)
                    v.insert(str);
                j=0;
                str.clear();
            }
        }
        if(str.size())
        v.insert(str);
        str.clear();
    }
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<endl;
    return 0;
}
