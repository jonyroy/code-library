#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m,cn=0,cnt=0;
    cin>>n>>m;
    cn=n/2;
    if(n%2)
        cnt=1;
    if((cn+cnt)%m==0&&(cn+cnt)>=m)
    {
        cout<<cn+cnt<<endl;
        return 0;
    }
    long int c=cn;
    for(int i=1;i<=c;i++)
    {
        cn--;
        cnt=cnt+2;
        if((cn+cnt)%m==0&&(cn+cnt)>=m)
         {
          cout<<cn+cnt<<endl;
          return 0;
        }
    }
    cout<<"-1";
    return 0;
}
