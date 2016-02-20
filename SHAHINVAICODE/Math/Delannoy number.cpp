/*
Delannoy number
From Wikipedia, the free encyclopedia
Jump to: navigation, search

In mathematics, a Delannoy number D describes the number of paths from the
southwest corner (0, 0) of a rectangular grid to the northeast corner (m, n),
using only single steps north, northeast, or east. The Delannoy numbers are
named after French army officer and amateur mathematician Henri Delannoy.[1]
 he central Delannoy numbers D(n) = D(n,n) are the numbers for a square n × n grid. The first few central Delannoy numbers (starting with n=0) are:

    1, 3, 13, 63, 321, 1683, 8989, 48639, 265729, ...
    D(n,m)=D(n,m-1)+D(n-1,m-1)+D(n-1,m); if m=0 or n=0 D(n,m)=0;
 */
#include<bits/stdc++.h>
using namespace std;
#define MS0(x) memset(x,0,sizeof(x))
#define MAX 20
#define MaxVal 100007
long long ndk[MAX][MAX];
void Delannoy_number()
{
    int i,j,s;
    for(i=0;i<MAX;i++)
    ndk[i][0]=1;
    for(i=0;i<MAX;i++)
    ndk[0][i]=1;
    cout<<ndk[0][0]<<endl;
    for(i=1;i<MAX;i++)
    {
        //cout<<ndk[i][0]<<" ";
        for(j=1;j<MAX;j++)
        {
            ndk[i][j]=ndk[i-1][j]+ndk[i-1][j-1]+ndk[i][j-1];

            // cout<<ndk[i][j]<<" ";
        }

       cout<<ndk[i][i]<<endl;
    }
}
int main()
{
    Delannoy_number();
    int n,k;
    while(cin>>n)
    {
        //MS0(mem);
        cout<<ndk[n][n]<<endl;
    }
    return 0;
}


