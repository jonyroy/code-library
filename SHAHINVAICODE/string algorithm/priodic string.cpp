#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>

using namespace std;

int b, d;
string a, c;

int next[105], num[105];

int main()
{
  cin >> b >> d >> a >> c;
  for (int i = 0; i < c.size(); i++)
  {
    int p1 = i;
    int n = 0;
    for (int j = 0; j < a.size(); j++)
    {
      if (c[p1] == a[j])
      {
        p1++;
        n += p1 / c.size();
        p1 %= c.size();
      }
    }
    next[i] = p1;
    num[i] = n;
    // printf ("%d: %d %d\n", i, p1, n);
  }
  int tot = 0;
  int cur = 0;
  for (int i = 0; i < b; i++)
  {
    tot += num[cur];
    cur = next[cur];
  }
  printf ("%d\n", tot / d);
}
