//DER.......
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define LPI(i,n) for(int i=0;i<(n);i++)
#define LPI1(i,a,b) for(int i=(a);i<=(b);i++)
#define LPIL(i,x) for(int i=0;x[i];i++)
#define LPD(i,n) for(int i=(n)-1;i>=0;i--)
#define LPD1(i,a,b) for(int i=(a);i>=(b);i--)
#define I(x) scanf("%d",&x)
#define RI(x) int x;I(x)
#define II(x,y) scanf("%d%d",&x,&y)
#define RII(x,y) int x,y;II(x,y)
#define III(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIII(x,y,z) int x,y,z;III(x,y,z)
#define RS(x) scanf("%s",x)
#define PI(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')
#define F first
#define S second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
int A_heap_size,A_length;
void Max_Heapify(int A[],int i)
{
    int l,r,largest;
    l=i*2;
    r=l+1;
    if(l<=A_heap_size && A[l]>A[i])
    largest=l;
    else
    largest=i;
    if(r<=A_heap_size && A[r]>A[largest])
    largest=r;
    if(largest!=i)
    {
        swap(A[i],A[largest]);
        Max_Heapify(A,largest);
    }
}
void Build_Max_Heap(int A[])
{
    int i;
    //A_heap_size=A_length;
    for(i=A_heap_size/2;i>0;i--)
    Max_Heapify(A,i);
}
void HeapSort(int A[])
{
    int i;
    Build_Max_Heap(A);
    for(i=A_length;i>1;i--)
    {
        swap(A[1],A[i]);
        A_heap_size=i-1;
       // Build_Max_Heap(A);
        Max_Heapify(A,1);
    }
}
int main(){
    int A[1000];
    RI(n);
    LPI(i,n)
    {
        scanf("%d",&A[i+1]);
    }
    A_length=n;
    A_heap_size=n;
    HeapSort(A);
    LPI(j,n)
    PIS(A[j+1]);


    return 0;
}


