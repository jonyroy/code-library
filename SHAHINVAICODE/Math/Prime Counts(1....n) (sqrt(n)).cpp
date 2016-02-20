#include<bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < (int)(n); i++)

const int maxn = 32000; // sqrt(N)
const int maxLen = 30000;

int is[maxn];
int pn, p[maxn], pos[maxn];
int cc, mark[maxLen];

void prime()
{
  for (int i = 2; i < maxn; i++)
    if (!is[i])
    {
      p[pn] = i, pos[pn] = 2 * i, pn++;
      for (int j = i + i; j < maxn; j += i)
        is[j] = 1;
    }
}
long int prime_count(int n)
{
    //int n = (int)1e9 + 1;
    cc=0;
  int cnt = 0,  shift = 0;
  for (int L = 2, R = min(n, maxLen); L < n; R = min(R + maxLen, n))
  {
    cc++;
    forn(i, pn)
    {
      int &r = pos[i], dr = p[i];
      while (r < L)
        r += dr;
      while (r < R)
        mark[r - shift] = cc, r += dr;
    }
    while (L < R)
      cnt += (mark[L++ - shift] != cc);
    shift += maxLen;
  }
  printf("[1..%d] --> %d\n", n-1, cnt);
  return cnt;
}
int main()
{
    int n;
    prime();
    while(cin>>n)
    {
       prime_count(n+1);
    }
return 0;
}
