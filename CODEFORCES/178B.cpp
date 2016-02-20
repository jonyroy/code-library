#include<cstdio>
#include<algorithm>
using namespace std;
struct first
{
    int a;
    int b;
};
int main()
{
    int n,i;
    struct first sor[110];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    scanf("%d",&sor[i].a,&sor[i].b);
   sort(sor[1].b,sor[n+1].b);
    return 0;
}
