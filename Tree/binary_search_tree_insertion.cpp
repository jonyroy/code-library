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
#include<sstream>
#include <cassert>
#include <ctime>
using namespace std;
struct tree
{
    int info,L,R;
};
 struct tree s[10000];
 int inser(int root,int info,int posi)
 {
       if(s[root].info<info)
       {
           if(s[root].R==0)
            {
            s[root].R=posi;
            return 0;
            }
           else
            inser(s[root].R,info,posi);
       }
       else
       {
           if(s[root].L==0)
            {
            s[root].L=posi;
            return 0;
            }
            else
                inser(s[root].L,info,posi);
       }
       return 0;
 }
 int display(int i)
 {
     if(i==0)
        return 0;
     display(s[i].L);
     cout<<s[i].info<<" ";
     display(s[i].R);
     return 0;
 }
int main()
{
    int n,root=1;
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    for(int i=0;i<10000;i++)
    {
        s[i].L=0;
        s[i].R=0;
    }
    cin>>n>>s[1].info;
    for(int i=2;i<=n;i++)
    {
        cin>>s[i].info;
        inser(root,s[i].info,i);
    }
    display(root);
    return 0;
}
