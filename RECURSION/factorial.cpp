#include <bits/stdc++.h>
using namespace std;
int facTorial(int n)
{
    if(n==0)
        return 1;
    else
        return n*facTorial(n-1);
}
int main()
{
    int n;
    cin>>n;
    cout<<facTorial(n)<<endl;
    return 0;
}
