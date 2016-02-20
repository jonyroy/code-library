#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100]={0},n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
        a[s[i]-64]++;
    sort(a+1,a+27);
    long long sum=0;
    for(int i=27;i>=1;i--)
    {
      if(a[i]>0)
      {
          if(a[i]>=k){
            sum+=(k*k);
            break;
          }
          else
          {
              k=k-a[i];
              sum+=(a[i]*a[i]);
          }
      }
    }
    cout<<sum;
}
