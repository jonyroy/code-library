//Accepted
#include<set>
#include<map>
#include<ctime>
#include<string>
#include<queue>
#include<cstdio>
#include<cmath>
#include<vector>
#include<cctype>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<cassert>
#include<iostream>
#include<algorithm>
#include <functional>
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
     int i,len,n;
char a[110];
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{
    scanf("%s",a);
len=strlen(a);
if(len>10)
{
    printf("%c%d%c\n",a[0],len-2,a[len-1]);
}
else
printf("%s\n",a);
}
    return 0;
}
