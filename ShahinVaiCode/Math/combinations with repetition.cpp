/*
 Finding factorial power divider

Given two numbers: n and k . Required to calculate with any degree of
the divisor k among n! Ie find the greatest x such that n! divided into k ^ x .
*/
#include<bits/stdc++.h>
using namespace std;
//n! divided into k ^ x and here x?
#define MAX 1000
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
int call(i,j,l,s)
{
    if(i<l)
    {
        for(k=j;k<=m;k++)
        {
            x=x+call(i+1,k+1,l,s+a[k]);
        }
        return x;
    }
    else
    {
        for(k=j;k<=m;k++)
        {
            p=s+a[k];
            p=n-p;
            x=x+ncr[m+p-1][p];
        }
        return x;
    }
}
int IEP(int n,int k,int p[])
{
    s=ncr[k+n-1][n];
    for(i=1;i<=k;i++)
    {

    }

}
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        cout<<fact_pow(n,k)<<endl;
    }
    return 0;
}


