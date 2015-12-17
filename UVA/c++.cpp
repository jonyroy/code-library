#include<stdio.h>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<string>
#include<map>
#include<vector>
#include<math.h>
#include<stack>
#include<queue>
using namespace std;
#include <cstdio>
unsigned long long int n,k,sum,c;
int getOrder(int &n, int d)
{
     int count = 0;
     while ( (n % d) == 0  )
     {
          count += 1;
          n /= d;
     }
     return count;
}
int lastNonzeroDigit(int n)
{
     int twoOrderCount = 0;
     int lastDigit = 1;
     for( int i = 1; i <= n; i++ )
     {
          int remain = i;
          int fiveOrder = getOrder(remain, 5);
          int twoOrder = getOrder(remain, 2);
          twoOrderCount += (twoOrder - fiveOrder);
          lastDigit = (lastDigit * remain % 10);
     }
     for (int i = 0; i < twoOrderCount; i++)
     {
          lastDigit = ( lastDigit * 2 ) % 10;
     }
     return lastDigit;
}
int main(void)
{
  int a,n;
  scanf("%d",&a);
  n=lastNonzeroDigit(a);
  printf("%d\n",n);
 return 0;
}
