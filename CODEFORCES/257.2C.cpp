#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,k,a,b;
    cin>>n>>m>>k;
    if(k>m+n-2)
    {
        cout<<"-1";
        return 0;
    }
    if(k<n||k<m){
    a=n/(k+1);
    b=m/(k+1);
    a=a*m;
    b=b*n;
    cout<<max(a,b);
    }
    else
    {
         a=k-(n-1)+1;
         b=m/a;
         a=k-(m-1)+1;
         a=n/a;
         cout<<max(a,b);
    }
}
