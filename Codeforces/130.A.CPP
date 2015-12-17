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
#define pb  push_back
#define pob pop_back
#define mp  make_pair
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define For(i,k,r)  for(int i = k; i <= r; i++)
#define Fill(a,b)   memset(a,b,sizeof(a))
#define PI 3.141592653589793
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int main()
{
    char s[205],ch[5],store[205];
    int k=0,n;
    cin>>s;
    n=strlen(s);
    for(int i=0;i<n;i++)
    {
        ch[0]=s[i];
        ch[1]=s[i+1];
        ch[2]=s[i+2];
        ch[3]='\0';
        if(strcmp(ch,"WUB")==0)
            {
            i+=2;
            store[k++]=32;
            }
            else
                store[k++]=s[i];
    }
    store[k]='\0';
    int i=0;
    while(store[i]==32)
    {
        i++;
    }
    for(int j=i;j<k;j++)
    {
        if(store[j]==32&&store[j+1]==32)
        {
            printf("%c",32);
            j++;
        }
        else
            printf("%c",store[j]);
    }
    cout<<endl;
    return 0;
}

