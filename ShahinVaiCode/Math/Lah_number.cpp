/*
In mathematics, Lah numbers, discovered by Ivo Lah in 1955,[1] are coefficients
expressing rising factorials in terms of falling factorials.

Unsigned Lah numbers have an interesting meaning in combinatorics: they count
the number of ways a set of n elements can be partitioned into k nonempty
linearly ordered subsets. Lah numbers are related to Stirling numbers.
L(n, 1) is always n!; using the interpretation above, the only partition of
{1, 2, 3}
into 1 set can have its set ordered in 6 ways:

    {(1, 2, 3)}, {(1, 3, 2)}, {(2, 1, 3)}, {(2, 3, 1)}, {(3, 1, 2)} or
    {(3, 2, 1)}

L(3, 2) corresponds to the 6 partitions with two ordered parts:

    {(1), (2, 3)}, {(1), (3, 2)}, {(2), (1, 3)}, {(2), (3, 1)}, {(3), (1, 2)}
    or {(3), (2, 1)}


    L(n,1) = n!
    L(n,2) = (n-1)n!/2
    L(n,3) = (n-2)(n-1)n!/12
    L(n,n-1) = n(n-1)
    L(n,n) = 1
 */
#include<bits/stdc++.h>
using namespace std;
#define MS0(x) memset(x,0,sizeof(x))
#define MAX 10
#define MaxVal 100007
long long L[MAX][MAX];
long long fac[MAX];
void factorial()
{
    int i;
    fac[0]=1;
    for(i=1;i<MAX;i++)
    fac[i]=fac[i-1]*i;
}
void Lah_number()
{
    int i,j,s;
    for(i=1;i<MAX;i++)
    {

         L[i][1]=fac[i];
         cout<<L[i][1]<<" ";
        for(j=1;j<i-1;j++)
        {
            L[i][j+1]=((i-j)*L[i][j])/(j*(j+1));
            cout<<L[i][j+1]<<" ";
        }
       L[i][i]=1;
       cout<<L[i][i]<<endl;
    }
}
int main()
{
    factorial();
    Lah_number();
    int n,k;
    while(cin>>n>>k)
    {
        cout<<L[n][k]<<endl;
    }
    return 0;
}


