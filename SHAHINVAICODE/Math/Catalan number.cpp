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

int main()
{
    Genarate_ncr();
    int n;
    while(cin>>n)
    {
        cout<<(ncr[2*n][n])/(n+1)<<endl;
    }
  return 0;
}
