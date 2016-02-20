#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[100005]={0},dollar=0,energy=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
       energy+=(a[i-1]-a[i]);
       if(energy<0)
       {
           dollar+=(energy*(-1));
           energy=0;
       }
    }
    cout<<dollar<<endl;
}
