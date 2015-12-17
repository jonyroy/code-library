//Accepted
#include<iostream>
#include<cstdio>
#include<map>
#include<cstring>
#include<cmath>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<queue>
#define inf 1600005
#define M 40
#define N 505
#define mp(a,b) make_pair(a,b)
#define mem(a,b) memset(a,b,sizeof(a))
#define sqr(a) ((a)*(a))
#define FOR(i,n)  for(int i=1;i<=n;i++)
#define rep(i,n)  for(int i=n;i>=1;i--)
using namespace std;
int main()
{
    long int inser[10050],i,j,n,key,k,madian;
    cin>>inser[1];
    cout<<inser[1]<<endl;
    i=2;
  while(cin>>inser[i])
    {
        key=inser[i];
        j=i-1;
        while(j>0&&inser[j]>key)
        {
            inser[j+1]=inser[j];
            j--;
        }
        inser[j+1]=key;
        if(i%2==0)
        {
            k=i/2;
            madian=(inser[k]+inser[k+1])/2;
            cout<<madian<<endl;
        }
        else
        {
            madian=inser[i/2+1];
            cout<<madian<<endl;
        }
        i++;
    }
    return 0;
}

