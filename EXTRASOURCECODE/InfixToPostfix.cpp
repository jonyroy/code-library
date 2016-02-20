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
char Q[100];
char stack[100];
char P[100];
char ch[200];
int i,l,s,T;
for(i=0;i<200;i++)
ch[i]=0;
ch['-']=1;
ch['+']=2;
ch['/']=3;
ch['*']=4;
ch['^']=5;
ch['(']=-1;
ch[')']=-1;
while(scanf("%s",Q)!=EOF)
{
    l=strlen(Q);
    Q[l]=')';
    s=-1;i=-1;
    T=0;
    stack[s+1]='(';
    s++;
    while(T<=l)
    {
        if(ch[Q[T]]==0)
        {
            P[i+1]=Q[T];
            i++;
        }
        else if(Q[T]=='(')
        {
            stack[s+1]=Q[T];
            s++;
        }
        else if(ch[Q[T]]>0)
        {
            while(ch[stack[s]]>=ch[Q[T]])
            {
                P[i+1]=stack[s];
                i++;
                s--;
            }
            stack[s+1]=Q[T];
            s++;
        }
        else if(Q[T]==')')
        {
            while(stack[s]!='(')
            {
                P[i+1]=stack[s];
                i++;
                s--;
            }
            s--;
        }
        T++;
    }
    P[i+1]='\0';
    printf("%s\n",P);
}
    return 0;
}
