#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;
const int siz=10000;
int A[siz],B[siz];
int count_sort(int A[],int B[],int k,int ma)
{

    int C[siz]={0},i;
    for(i=1;i<=k;i++)
        C[A[i]]++;
    for(i=2;i<=ma;i++)
        {
        C[i]=C[i]+C[i-1];
        //cout<<C[i]<<" ";
        }
    for(i=k;i>=1;i--)
    {
        B[C[A[i]]]=A[i];
        C[A[i]]=C[A[i]]-1;
    }
    return 0;
}
int main()
{
     int n,i,ma=-10000;
     cin>>n;
     for(i=1;i<=n;i++)
        {
        cin>>A[i];
        if(ma<A[i])
            ma=A[i];
        }
     count_sort(A,B,n,ma);
     cout<<endl;
     for(i=1;i<=n;i++)
        cout<<B[i]<<" ";
    return 0;
}
