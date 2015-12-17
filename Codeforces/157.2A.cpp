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
    char binary[100010],i;
    int coun=0;
    cin>>binary;
    int len=strlen(binary);
     for(i=0;i<len-1;i++)
     {
         if(binary[i]=='0'&&coun==0)
         {
             coun=1;
         }
         else
            cout<<binary[i];
     }
     if(coun!=0&&binary[i]=='1')
       cout<<binary[i];
     else if(coun==1&&binary[i]=='0')
        cout<<binary[i];
    return 0;
}
