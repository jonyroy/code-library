#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,ma=0,mi=0;
    cin>>n>>m;
    ma=n-(m-1);
    ma=ma*(ma-1)/2;
    mi=n/m;
    long long re=n%m;
    mi=re*((mi+1)*mi)/2+(m-re)*(mi*(mi-1))/2;
    cout<<mi<<" "<<ma;
    return 0;
}
