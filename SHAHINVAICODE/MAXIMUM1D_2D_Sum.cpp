#include<stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
#define M 10
#define N 10
void kadane(int input[], int n, int &x1, int &x2, int &max)
{
    int cur, i;
    max = 0;
    cur = 0;
    x1 = x2 = 0;
    int lx1, lx2;
    lx1 = 0;
    for(int i = 0; i<n; i++)
    {
        cur = cur+input[i];
        if(cur > max)
        {
            max = cur;
            x2 = i;
            x1 = lx1;
        }
        if (cur < 0)
        {
            cur = 0;
            lx1 = i + 1;
        }
    }
}
int main()
{
    int tmp[100], n, x1, x2;
    int cur, max_sum, fx1, fx2, fy1, fy2;
    int i,j,k,t,x,al;
    int input[M][N];
    scanf("%d",&t);
    for(x=0;x<t;x++)
    {
        scanf("%d",&al);
        for(i=0;i<al;i++)
        for(j=0;j<al;j++)
        scanf("%d",&input[i][j]);
        fx1 = fx2 = fy1 = fy2 = max_sum = cur = -1;

    for (i=0; i< M; i++)
    {
        for(k=0; k<N; k++)
            tmp[k] = 0;

        for (j=i; j<M; j++)
        {
            for(k=0; k<N; k++)
                tmp[k] += input[j][k];
            kadane(tmp, N, x1, x2, cur);

            if (cur > max_sum)
            {
                fy1 = x1;
                fy2 = x2;
                fx1 = i;
                fx2 = j;
                max_sum = cur;
            }
        }
    }
    cout << "max Sum = " << max_sum << " from (" << fx1 << "," << fy1 << ") to ("
        << fx2 << "," << fy2 << ")" << endl;
    }
    return 0;
}
