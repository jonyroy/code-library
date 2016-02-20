/*
* Author: Jony Roy
* Date: 17-02-2016
* Contact: jonyroyice@gmail.com
* Complexity: O(nlogk)
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;
const int inf=2000000000;
int n,Sequence[20050],I[10050],L[10050],cnt;
int takeInput(int m)
{
    for(int i=0;i<m;i++)
    scanf("%d",&Sequence[i]);
    return 0;
}
int LisNlogk()
{
    int i,m=0;
    cnt=1;
    I[0]=-inf;
    for(int j=1;j<=n;j++)
        I[j]=inf;
        int LisLength=0;
        for(i=0;i<n;i++)
        {
            int low=0,high=LisLength,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(I[mid]>Sequence[i])
                    low=mid+1;
                else
                    high=mid-1;
            }
            I[low]=Sequence[i];
            L[i]=low;
            if(L[i]==m)
            cnt++;
            else if(L[i]>m)
            m=L[i],cnt=1;
            if(LisLength<low)
                LisLength=low;
        }
    return LisLength;
}
int main()
{
    while(scanf("%d",&n)!=EOF)
    {
        takeInput(n);
        int result=LisNlogk();
        printf("%d     %d\n",result,cnt);
    }
    return 0;
}
