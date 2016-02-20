/*
First order Euler's number
Recurrence formula:
<n,k>=(k+1)<n-1,k>+(n-k)<n-1,k-1>
  <n,0><n,1><n,2><n,3><n,4><n,5>
0   1
1 	1	 0
2 	1 	 1 	   0
3 	1 	 4 	   1 	0
4 	1 	 11    11 	1 	 0
5 	1 	 26    66 	26 	 1 	  0
6 	1 	 57    302 	302  57   1  0
 */
#include<bits/stdc++.h>
using namespace std;
#define MS0(x) memset(x,0,sizeof(x))
#define MAX 12
#define MaxVal 100007
vector<long> nek[MAX];
void Euler_number_first_order()
{
    int i,j,s;
    nek[0].push_back(1);
    cout<<nek[0][0]<<endl;
    for(i=1;i<MAX;i++)
    {
        nek[i].push_back(1);
        cout<<nek[i][0]<<" ";
        for(j=1;j<i;j++)
        {
            s=(j+1)*nek[i-1][j]+(i-j)*nek[i-1][j-1];
            nek[i].push_back(s);
             cout<<nek[i][j]<<" ";
        }
        nek[i].push_back(0);
         cout<<nek[i][j]<<endl;
    }
}
int main()
{
    Euler_number_first_order();
    int n,k;
    while(cin>>n>>k)
    {
        //MS0(mem);
        cout<<nek[n][k]<<endl;
    }
    return 0;
}


