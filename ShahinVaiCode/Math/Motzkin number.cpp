/*
Catalan number
nt Catalan number =2nCn/(n+1)

n=3 ()( )(),( )(()), (()) (),( ()() ),((())) 5ways
*/
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
#define MaxVal 100007
vector<long> ncr[MAX];
void Genarate_ncr()
{
    int i,j,s;
    ncr[0].push_back(1);
    for(i=1;i<MAX;i++)
    {
        ncr[i].push_back(1);
        for(j=1;j<i;j++)
        {
            s=ncr[i-1][j]+ncr[i-1][j-1];
            ncr[i].push_back(s);
        }
        ncr[i].push_back(1);
    }
}
long long M[MAX];
void Motzkin_number()
{
    int i,j;
    M[0]=1;M[1]=1;
    for(i=2;i<20;i++)
    {
        M[i]=0;
        for(j=0;j<=i/2;j++)
        M[i]=M[i]+(ncr[2*j][j]*ncr[i][2*j])/(j+1);
    cout<<M[i]<<endl;
    }
}

int main()
{
    Genarate_ncr();
    Motzkin_number();
    int n;
    while(cin>>n)
    {
        cout<<M[n]<<endl;
    }
  return 0;
}
