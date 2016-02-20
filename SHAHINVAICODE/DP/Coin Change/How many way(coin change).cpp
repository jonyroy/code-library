#include<bits/stdc++.h>
using namespace std;

#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define inf 1001001001
#define mp make_pair
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
/* How many way Making Change. You are given n types of coin
denominations of values v(1) < v(2) < ... < v(n) (all integers).
Assume v(1) = 1, so you can always make change for any amount
of money C. Give an algorithm which makes change for an amount
of money C. How many different way make change. */
int wi[10],bn=5,cap=0;
int HT[10][8489];
int max=0;
int Call(int i,int w)
{
    if(i>=bn+1)
    {
        if(w==0)
        return 1;
        return 0;
    }
    if(HT[i][w]!=-1)
    return HT[i][w];

    int profit1=0;
    if(w-wi[i]>=0)
    {
       profit1=profit1+ Call(i,w-wi[i]);
    }

   profit1=profit1+ Call(i+1,w);
    HT[i][w]=profit1;
    return HT[i][w];

}
int main(){
   int n;
    wi[1]=1;wi[2]=5;wi[3]=10;wi[4]=25;wi[5]=50;
     ms1(HT);
    while(scanf("%d",&n)!=EOF)
    {
        cap=n;
        n=Call(1,n);
        cout<<n<<endl;
    }

    return 0;
}

