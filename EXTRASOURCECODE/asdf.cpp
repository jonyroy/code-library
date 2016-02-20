    #include<set>
    #include<list>
    #include<map>
    #include<stack>
    #include<bitset>
    #include<ctime>
    #include<string>
    #include<conio.h>
    #include<deque>
    #include<queue>
    #include<cstdio>
    #include<cmath>
    #include<utility>
    #include<vector>
    #include<cstdlib>
    #include<cstring>
    #include<cstring>
    #include<cassert>
    #include<fstream>
    #include<sstream>
    #include<complex>
    #include<iostream>
    #include<stdbool.h>
    #include<algorithm>
    #include<functional>
    using namespace std;
    #define F first
    #define S second
    #define len(a) strlen(a)
    #define size(a) a.size()
    #define MAX 1000
    #define EPS (1E-9)
    #define sqr(x) ((x) * (x))
    #define pb(x) push_back(x)
    #define pob(x) pop_back(x)
    #define mp(x) make_pair(x)
    #define PI 3.141592653589793
    #define Fill(a,b) memset(a,b,sizeof(a))
    #define FOR(i,k,n) for(int i = k; i <= n; i++)
    #define rep(i,k,n) for(int i=n;i>=k;i--)
    typedef int I;
    typedef long L;
    typedef float FL;
    typedef double D;
    typedef long long LL;
    typedef vector<int>VI;
    typedef pair<int,int> PII;
    typedef long double LD;
    typedef vector<long int>VL;
    typedef unsigned long long ULL;
//    #include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<math.h>
//#define MAX 1000
void reverse(char *from, char *to ){
   int len=strlen(from);
   int l;
   for(l=0;l<len;l++)
     to[l]=from[len-l-1];
   to[len]='\0';
 }

void call_sum(char *first, char *sec, char *result){
  char F[MAX], S[MAX], Res[MAX];
  int f,s,sum,extra,now;
  f=strlen(first);
  s=strlen(sec);
  reverse(first,F);
  reverse(sec,S);
  for(now=0,extra=0;(now<f && now<s);now++){
     sum=(F[now]-'0') + (S[now]-'0') + extra;
     Res[now]=sum%10 +'0';
     extra= sum/10;
   }
  for(;now<f;now++){
     sum=F[now] + extra-'0';
     Res[now]=sum%10 +'0';
     extra=sum/10;
   }
  for(;now<s;now++){
     sum=F[now] + extra-'0';
     Res[now]=sum%10 +'0';
     extra=sum/10;
   }
  if(extra!=0) Res[now++]=extra+'0';
  Res[now]='\0';
  if(strlen(Res)==0) strcpy(Res,"0");
  reverse(Res,result);}

int main(){

  char fir[MAX],sec[MAX],res[MAX];
  while(scanf("%s%s",&fir,&sec)==2){
    call_sum(fir,sec,res);
    int len=strlen(res);
    for(int i=0;i<len;i++) printf("%c",res[i]);
    printf("\n");
   }
  return 0;
}
