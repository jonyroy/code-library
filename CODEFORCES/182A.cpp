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
   long int n,m,plu=0,minu=0;
   cin>>n>>m;
   for(int i=1;i<=n;i++)
   {
       int a;
       cin>>a;
       if(a==1)
        plu++;
       else
       minu++;
   }
   for(int i=1;i<=m;i++)
   {
       int a,b,c;
       cin>>a>>b;
        c=(b-a)+1;
        if(c%2)
         cout<<"0\n";
        else
        {
            int d=c/2;
            if(d<=plu&&d<=minu)
                cout<<"1\n";
            else
                cout<<"0\n";
        }
   }
  return 0;
}
