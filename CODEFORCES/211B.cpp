#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m[200000]={0},b,sum=0;
    cin>>n>>b;
    for(int i=1;i<=n;i++)
        {
        cin>>m[i];
        m[i]+=m[i-1];
        }
        long int ma=1000000000,index=0;
        for(int i=b;i<=n;i++)
        {
            sum=m[i]-m[i-b];
            if(ma>=sum)
            {
                ma=sum;
                index=i-b+1;
            }
        }
        cout<<index<<endl;
    return 0;
}
