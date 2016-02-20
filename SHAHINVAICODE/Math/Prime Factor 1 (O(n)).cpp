#include<bits/stdc++.h>
using namespace std;

#define maxn 30000000
#define maxp 2000000

int x[maxn];
int pn = 0, p[maxp];
void Prime()
{
  int i;
  for (i = 2; i < maxn; i++)
  {
    if (x[i] == 0)
      p[++pn] = i, x[i] = pn;
    for (int j = 1; j <= x[i] && p[j] * i < maxn; j++)
      x[p[j] * i] = j;
  }
  printf("pn=%d\n", pn);
 /* for(i=0;i<20;i++)
  {
      printf("%d ",x[i]);
  }
  printf("\n");
  for(i=0;i<20;i++)
  {
      printf("%d ",p[i]);
  }*/
}
void prime_factor(int n)
{
    cout<<n<<" = ";
      while(n>1)
      {
        cout<<p[x[n]]<<" ";
        n=n/p[x[n]];
      }
      cout<<endl;
}
int main()
{
  Prime();
  int n;
  while(cin>>n)
  {
      prime_factor(n);
  }
  return 0;
}
