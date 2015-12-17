#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <cctype>
#include <set>
#include <bitset>
#include <algorithm>
#include <list>
#include <vector>
#include <sstream>
#include <iostream>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> paii;
typedef pair< ll, ll > pall;


#define PI (2.0*acos(0))
#define ERR 1e-5
#define mem(a,b) memset(a,b,sizeof a)
#define pb push_back
#define popb pop_back
#define all(x) (x).begin(),(x).end()
#define mp make_pair
#define SZ(x) (int)x.size()
#define oo (1<<25)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define Contains(X,item)        ((X).find(item) != (X).end())
#define popc(i) (__builtin_popcountll(i))
#define fs      first
#define sc      second
#define EQ(a,b)     (fabs(a-b)<ERR)
#define MAX 10020
#define twoL(X) (((ll)(1))<<(X))

template<class T1> void deb(T1 e){cout<<e<<endl;}
template<class T1,class T2> void deb(T1 e1,T2 e2){cout<<e1<<" "<<e2<<endl;}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3){cout<<e1<<" "<<e2<<" "<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6){cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;}


template<class T> T Abs(T x) {return x > 0 ? x : -x;}
template<class T> inline T sqr(T x){return x*x;}
ll Pow(ll B,ll P){      ll R=1; while(P>0)      {if(P%2==1)     R=(R*B);P/=2;B=(B*B);}return R;}
ll BigMod(ll B,ll P,ll M){     ll R=1; while(P>0)      {if(P%2==1){R=(R*B)%M;}P/=2;B=(B*B)%M;} return R;} /// (B^P)%M

///int rrr[]={1,0,-1,0};int ccc[]={0,1,0,-1}; //4 Direction
///int rrr[]={1,1,0,-1,-1,-1,0,1};int ccc[]={0,1,1,1,0,-1,-1,-1};//8 direction
///int rrr[]={2,1,-1,-2,-2,-1,1,2};int ccc[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
///int rrr[]={2,1,-1,-2,-1,1};int ccc[]={0,1,1,0,-1,-1}; //Hexagonal Direction
///int month[]={31,28,31,30,31,30,31,31,30,31,30,31}; //month


ll M[MAX],C[MAX]; //y=mx+c we need only m(slope) and c(constant)
ll SumT[MAX], SumF[MAX] , dp[MAX];
ll T[MAX], F[MAX];
ll S;

//Returns true if either line l1 or line l3 is always better than line l2
bool bad(int l1,int l2,int l3)
{
	/*
	intersection(l1,l2) has x-coordinate (c1-c2)/(m2-m1)
	intersection(l1,l3) has x-coordinate (c1-c3)/(m3-m1)
	set the former greater than the latter, and cross-multiply to
	eliminate division
	*/
	return (C[l3]-C[l1])*(M[l1]-M[l2]) <= (C[l2]-C[l1])*(M[l1]-M[l3]); //if the query x values is non-decreasing (reverse(> sign) for vice verse)
}

//Adding should be done serially
//If we want minimum y coordinate(value) then maximum valued m should be inserted first
//If we want maximum y coordinate(value) then minimum valued m should be inserted first
void add(long long m,long long c,int &last)
{
	//First, let's add it to the end
	M[last]=m;
	C[last++]=c;
	//If the penultimate is now made irrelevant between the antepenultimate
	//and the ultimate, remove it. Repeat as many times as necessary
	//in short convex hull main convex hull tecnique is applied here
	while(last>=3&&bad(last-3,last-2,last-1))
	{
		M[last-2]=M[last-1];
		C[last-2]=C[last-1];
		last--;
	}
}

//Returns the minimum y-coordinate of any intersection between a given vertical
//line(x) and the lower/upper envelope(pointer)
//This can only be applied if the query of vertical line(x) is already sorted
//works better if number of query is huge
long long query(long long x,int indx, int &pointer,int last)
{
	//If we removed what was the best line for the previous query, then the
	//newly inserted line is now the best for that query
	if (pointer>=last)
		pointer=last-1;
	//Any better line must be to the right, since query values are
	//non-decreasing
	while (pointer<last-1 && M[pointer+1]*x+C[pointer+1]<=M[pointer]*x+C[pointer])  // Min Value wanted... (reverse(> sign) for max value)
		pointer++;
	return M[pointer]*x+C[pointer] + SumF[indx]*SumT[indx] + SumF[indx]*S;
}

//for any kind of query(sorted or not) it can be used
//it works because of the hill property
//works better if number of query is few
long long bs(int st,int end,long long x,int last)
{
    int mid=(st+end)/2;
    if(mid+1<last && M[mid+1]*x+C[mid+1]<M[mid]*x+C[mid]) return bs(mid+1,end,x,last); // Min Value wanted... (reverse(> sign) for max value)
    if(mid-1>=0 && M[mid-1]*x+C[mid-1]<M[mid]*x+C[mid]) return bs(st,mid-1,x,last); // Min Value wanted... (reverse(> sign) for max value)
    return M[mid]*x+C[mid];
}


int main()
{
    //freopen("A.in","r",stdin);
    //freopen("A.out","w",stdout);
    int n;
    while(scanf("%d",&n)==1)
    {
        scanf("%I64d",&S);
        for(int i=1;i<=n;i++) scanf("%I64d %I64d",&T[i], &F[i]);

        mem(SumF,0);mem(SumT,0);mem(dp,0);
        for(int i=n;i>=1;i--) SumT[i]=SumT[i+1] + T[i];
        for(int i=n;i>=1;i--) SumF[i]=SumF[i+1] + F[i];

        int last=0,pointer=0;

        add(0,0,last);
        for(int i=n;i>=1;i--)
        {
            dp[i]=query(SumF[i],i,pointer,last);
//            deb(dp[i], SumT[i], SumF[i]);
            add(-1*SumT[i] , dp[i] ,last);
        }
        printf("%I64d\n",dp[1]);
    }
    return 0;
}
