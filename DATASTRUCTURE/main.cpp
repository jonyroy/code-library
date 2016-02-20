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
    int info,L,R,P;
};
 struct tree s[10000];
 int inser(int root,int info,int posi)
 {
       if(s[root].info<info)
       {
           if(s[root].R==0)
            {
            s[root].R=posi;
            s[posi].P=root;
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
            s[posi].P=root;
            return 0;
            }
            else
                inser(s[root].L,info,posi);
       }
       return 0;
 }
 int minimum(int x)
 {
     while(s[x].L!=0)
        x=s[x].L;
     return x;
 }
 int find_item(int root,int item)
 {
    if(root==0||s[root].info==item)
        return root;
     if(s[root].info>item)
        return find_item(s[root].L,item);
        else return find_item(s[root].R,item);
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
    s[1].P=0;
    for(int i=2;i<=n;i++)
    {
        cin>>s[i].info;
        inser(root,s[i].info,i);
    }
    int x=minimum(s[1].R);
    cout<<endl<<endl<<s[x].info<<endl<<endl;
    int kk;
    //cin>>kk;
    // int a=find_item(root,kk);
    //cout<<a<<endl<<endl;
    //display(root);
    return 0;
}
