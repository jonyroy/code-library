#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<stack>
#include<map>
#include<set>
#include<string.h>
#include<cmath>
#include<stdio.h>
#include<ctype.h>
#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
using namespace std;
int main()
{
    long int T,i,j,k,len,count,l,t,r,m;
    char b[2000],extra[2000],dimen[1000][1000];
    bool test;
    scanf("%ld",&T);
    getchar();
    getchar();
    i=1;
    while(i<=T)
    {
        t=0;
        while(1)
        {
            gets(b);
            len=strlen(b);

            if(len==0)
            {
            printf("Case #%d:\n",i);
            for(m=0;m<t;m++)
            printf("%s\n",dimen[m]);
            break;
            }
            j=0;
            count=1;
            r=0;
          while(j<len)
          {
              k=1;
              test=false;
              while(isalpha(b[j]))
              {
                  extra[k++]=b[j++];
                  test=true;
              }
              j++;
              if(test==true)
              {
              extra[k]='\0';
              l=strlen(extra)-1;
              if(l>=count)
              {
               dimen[t][r++]=extra[count];
               count++;
              }
              }
          }
          dimen[t][r]='\0';
          t++;
        }
        if(i<T)
        printf("\n");
        i++;
    }
    return 0;
}
