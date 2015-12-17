#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
int ncr[100][100];
int nCr(int n,int r)
{
    if(r==1)
        return n;
    if(r==n)
        return 1;
    if(ncr[n][r])
        return ncr[n][r];
    else
    {
        ncr[n][r]=nCr(n-1,r)+nCr(n-1,r-1);
        return ncr[n][r];
    }
}
int main()
{
    int n,r;
    n=nCr(100,100);
    cout<<n<<endl;
     for(int i=10;i>=1;i--)
        {
        for(int j=1;j<=10;j++)
        cout<<ncr[i][j]<<" ";
        cout<<endl;
        }
    return 0;
}
