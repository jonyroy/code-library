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
int avail=1,start=0;
int insert_item(int info[],int link[],int avail,int start,int item,int loc)
{
    int save;
    if(avail==0)
    {
        cout<<"Overflow\n";
        return 0;
    }
    save=avail;
    avail=link[avail];
    cout<<"'"<<avail<<"'"<<endl;
    info[save]=item;
    if(loc==0)
    {
        link[save]=start;
        start=save;
    }
 else
 {
   link[save]=link[loc];
   link[loc]=save;
 }
    return 0;
}
