#include<bits/stdc++.h>
using namespace std;
int main()
{
long long int cnt=0;
int a[100000]={0};
      for(int i=2;i<=30;i++)
      {
          a[i*i]=1;
          a[i*i*i]=1;
      }
      int i=2;
      for(;;)
      {
           if(a[i]==0){
           cnt++;
           cout<<i<<" ";
           }
           if(cnt==500)
           {
                cnt=i;
                break;
           }
           i++;
      }
      cout<<cnt<<endl;
}
