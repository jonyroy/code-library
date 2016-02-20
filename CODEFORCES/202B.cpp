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
char str[10000000],co[100000000]={0};
int main()
{
    int m[15],n,position,l=1;
     stringstream s;
     string ss,st="-1",sss;
    cin>>n;
    for(int i=1;i<=9;i++)
    {
        cin>>m[i];
    }
    if(n==0)
    {
        cout<<"-1\n";
        return 0;
    }
        for(int i=1;i<=9;i++)
        {
            int p=n/m[i];
            for(int j=1;j<=p;j++)
            {
                s<<i;
                ss.clear();
                ss=s.str();
                char ch=ss[0];
                str[l++]=ch;
            }
                str[l]='\0';
           if(strlen(co)==strlen(str))
            ss.clear();
            sss.clear();
        }
        cout<<st<<endl;
      return 0;
}
