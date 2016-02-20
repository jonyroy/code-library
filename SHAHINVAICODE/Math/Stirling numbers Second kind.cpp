
#include<bits/stdc++.h>
using namespace std;
#define MS0(x) memset(x,0,sizeof(x))
/*long mem[1000][100];
long S( int n, int k )
{
    if(mem[n][k])
    return mem[n][k];
	if(n==k||k==1)
	return 1;
	return mem[n][k]=S(n-1,k-1)+k*S(n-1,k);
}*/
#define MAX 1000
#define MaxVal 100007
vector<long> nsk[MAX];
void Striling_number_second_kind()
{
    int i,j,s;
    nsk[0].push_back(1);
    for(i=1;i<MAX;i++)
    {
        nsk[i].push_back(0);
        for(j=1;j<i;j++)
        {
            s=j*nsk[i-1][j]+nsk[i-1][j-1];
            nsk[i].push_back(s);
        }
        nsk[i].push_back(1);
    }
}
int main()
{
    Striling_number_second_kind();
    int n,k;
    while(cin>>n>>k)
    {
        //MS0(mem);
        cout<<nsk[n][k]<<endl;
    }
    return 0;
}


