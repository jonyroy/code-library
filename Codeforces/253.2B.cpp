#include<bits/stdc++.h>
using namespace std;
#define F first
#define S second
#define MAX 1000500
#define EPS  (1E-9)
#define sqr(x)  ((x) * (x))
#define pb(x)  push_back(x)
#define pob(x)  pop_back(x)
#define mp(x)  make_pair(x)
#define PI 3.141592653589793
#define Fill(a,b)   memset(a,b,sizeof(a))
#define rep(i,k,n)  for(int i = k; i <= n; i++)
#define rrep(i,k,n)   for(int i=n;i>=k;i--)
typedef int  I;
typedef long  L;
typedef float  FL;
typedef double  D;
typedef long long LL;
typedef vector<int>VI;
typedef pair<int,int> PII;
typedef long double  LD;
typedef vector<long int>VL;
typedef unsigned long long ULL;
int main()
{
   freopen("input","r",stdin);
   freopen("out","w",stdout);
   string s;
   int k,cnt=-87987;
   cin>>s>>k;
   int len=s.size();
   if(len<=k){
   k=k-len;
   k=k/2;
   cout<<len*2+k*2;
   return 0;}
   for(int i=0;i<=len/2;i++)
   {
     for(int j=0;j<len;j++)
     {
       string a,b;
       int c=i+1,d=j+i+1;
       if(c<len&&c+d<=len&&j+i+1<len){
       a=s.substr(j,i+1);
       b=s.substr(j+i+1,i+1);

       if(a==b)
       {
         int r=a.size()+b.size();
         cnt=max(cnt,r);

       }
       }
     }
   }
   string st;
   for(int i=len-1;i>=0;i--)
   st+=s[i];
   //cout<<st<<endl;
   for(int i=1;i<=len/2;i++)
   {
      string a=st.substr(0,i);
      for(int j=0;j<len-i;j++)
      {
         if(j+i<=len-i){
         string b=s.substr(j,i);
        // cout<<a<<"  "<<b<<endl;
         int cn=j+2*i;
         if(a==b&&(len-cn)<=k)
         {
            cnt=max(2*(len-cn+i),cnt);
         }
         }
      }
   }

   cout<<cnt<<"  "<<len<<endl;
   if(len>k)
   cnt=max(k*2,cnt);
   cout<<cnt;
}
