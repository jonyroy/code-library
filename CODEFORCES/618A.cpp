/*
* Author: Jony Roy
* Date: 11-05-2016
* Contact: jonyroyice@gmail.com
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
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

int main(int argc, char *argv[])
{

    int n;
    stack<int>a;
    cin>>n;
    a.push(1);
    for(int i=2;i<=n;i++)
    {
        a.push(1);
        while(a.size()>=2)
        {
            int b=a.top();
            a.pop();
            int c=a.top();
            a.pop();
            if(b==c)
            {
                a.push(b+1);
            }
            else
            {
                a.push(c);
                a.push(b);
                break;
            }
        }
    }
    int m=a.size();
    int cnt[100];
    for(int i=1;i<=m;i++)
    {
        cnt[i]=a.top();
        a.pop();
    }
    for(int i=m;i>=1;i--)
        cout<<cnt[i]<<" ";
    return 0;
}

