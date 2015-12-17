//Accepted
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;
#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
int main()
{
    int T,i=1,len,j,k;
    bool test;
    char a[200],stack[200],b;
    scanf("%d%*c",&T);
    while(i<=T)
    {
        gets(a);
        if(a[0]==']'||a[0]==')')
        {
            printf("No\n");
            i++;
            continue;
        }
        len=strlen(a);
        k=0;
        test=false;
        for(j=0;j<len;j++)
        {
            if(a[j]=='('||a[j]=='[')
               stack[k++]=a[j];
               else if(a[j]==']'||a[j]==')')
               {
                 b=stack[k-1];
                 k--;
                 if(a[j]==']')
                 {
                     if(b!='[')
                     {
                     test=true;
                     break;
                     }
                 }
                 else
                 {
                     if(b!='(')
                    {
                     test=true;
                     break;
                    }
                 }
               }
        }
        if(test==true||k!=0)
        printf("No\n");
        else
        printf("Yes\n");
        i++;
    }
    return 0;
}
