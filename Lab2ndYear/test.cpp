//Everyone out of the pool
#include<bits/stdc++.h>
using namespace std;
map<long,int>aaa,aa;
class Pool
{
   int a,b,cnt;
   public:
   void input()
   {
    cin>>a>>b;
   }
   void OutofPool();
};
void Pool::OutofPool()
{
  int i=1;
while(i*i<=1000000000)
{
aaa[i*i]=1;
i++;
}
int n=1,sum=0;
while(sum<=1000000000)
{
sum=n*(n+1)/2;
aa[sum]=2;
n++;
}
cnt=0;
i=(int)sqrt(a+1);
while(i*i<b)
{
if(aaa[i*i]==1&&aa[i*i-1]==2)
cnt++;
i++;
}
cout<<cnt;
}
int main()
{
   Pool a;
   a.input();
   a.OutofPool();
}
