#include<bits/stdc++.h>
using namespace std;

#define sz(x) ((int)(x).size())
#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#define inf 1001001001
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;
const double eps = 1e-9;
const double pi = acos(-1.0);
const int maxn = (int)1e5 + 10;
const int mod = (int)1e9;
#define MAXN 10000
#define siz 100000
int n,sqrtSums[MAXN], st = 0,len; //массив предпросчитанных сумм
int A[siz];
int getPartSum(int r)
{
	int it = 0, res = 0;
	while((it+1) * len -1 <= r)
		res += sqrtSums[it++]; //прибавляем предпосчитанные отрезки, пока можем
	for(int i = it*len; i <=r; i++)
		res += A[i]; //прибавляем "хвост"
	return res;
}
int getSum(int l, int r)
{
	if(l==0)
		return getPartSum(r);
	else
		return getPartSum(r) - getPartSum(l-1);
}
int incElement(int index, int delta)
{
	A[index] += delta;
	sqrtSums[index/len] += delta;
}
//Range Minimum Query
int decElementRMQ(int index, unsigned int delta) //delta - на сколько уменьшить элемент
{
	A[index] -= delta;
	sqrtSums[index/len] = min(sqrtSums[index/len], A[index]);
}
//Range Maximum Query
int incElementRMQ(int index, unsigned int delta) //delta - на сколько увеличить элемент
{
	A[index] += delta;
	sqrtSums[index/len] = max(sqrtSums[index/len], A[index]);
}
int getGCD(int a, int b)
{
	while(a &&b)
	{
		if(a < b)
			b %= a;
		else
			a %= b;
	}
	return a + b;
}
int b[MAXN];
int gcdRQ(int l, int r)
{
	int cur_gcd = A[l++];
	for(int i = l; i <= r;)
		if (i % len == 0 &&i + len - 1 <= r) {
			cur_gcd = getGCD(cur_gcd, b[i / len]);
			i += len; //перескок через "sqrt-отрезок"
		}
		else
			cur_gcd = getGCD(cur_gcd, A[i++]);
}
int main()
{
    len = (int)sqrt(n) + 1;
    for(int i = 0; i < n; i++)
	sqrtSums[i / len] += A[i];
    return 0;
}

