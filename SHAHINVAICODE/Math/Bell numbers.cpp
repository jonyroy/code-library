/*
 Bell number as a sum of Stirling numbers of the second kind
    B_n= sum[ s{n,K}] where k=0,1...n;
*/
#include<bits/stdc++.h>
using namespace std;
#define MS0(x) memset(x,0,sizeof(x))
long long mem[2][100000];
long long bell[10000];
long bell_numbers()
{
    int i,j;
    bell[0]=1;
    mem[0][0]=1;
    cout<<bell[0]<<endl;
    for(i=1;i<20;i++)
    {
        mem[i%2][0]=mem[(i-1)%2][i-1];
        bell[i]=mem[i%2][0];
        cout<<bell[i]<<endl;
        for(j=0;j<i;j++)
        {
           mem[i%2][j+1]=mem[(i-1)%2][j]+mem[i%2][j];
        }
    }
}
int main()
{
    bell_numbers();
    return 0;
}


