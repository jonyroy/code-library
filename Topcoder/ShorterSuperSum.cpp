#include<bits/stdc++.h>
using namespace std;
int q[50][50];
int first_dp(int k,int n)
{
    if(q[k][n]>0)
    return q[k][n];
    if(k==0)
    return q[k][n]=n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=first_dp(k-1,i);
    }
    return q[k][n]=sum;
}
class ShorterSuperSum
{
	public:
	int calculate(int k, int n)
	{
	   for(int i=0;i<=40;i++)
        for(int j=0;j<=40;j++)
        q[i][j]=0;
        first_dp(k,n);
       return first_dp(k,n);
	}
};
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
