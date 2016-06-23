#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int llint;
int main()
{
	int tc;
	scanf("%d",&tc);
	for(int i=1;i<=tc;i++)
	{
		llint n,m;
		cin>>n;
		m=(10*n)/9;
		llint cnt=m-1;
		if(cnt-(cnt/10)==n)
		{
			cout<<"Case "<<i<<": "<<cnt<<" "<<m<<endl;
		}
		else
			cout<<"Case "<<i<<": "<<m<<endl;
	}
	return 0;
}
