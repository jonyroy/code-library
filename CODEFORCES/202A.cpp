#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    int sum=0,n,b,c,cou=0,co=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        if(b==25)
            {
            cou++;
            }
         else if(b==50)
            {

               if(cou>0)
                {
                    co++;
                    cou--;
                }
               else
               {
                   cout<<"NO\n";
                   return 0;
               }
            }
            else
            {
                if(co>0&&cou>=1)
                    {
                    co--;
                    cou=cou-2;
                    }
                else if(cou>=3)
                    cou=cou-3;
                else
                 {
                   cout<<"NO\n";
                   return 0;
                 }
            }
    }
    cout<<"YES\n";
    return 0;
}
