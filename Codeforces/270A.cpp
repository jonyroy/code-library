#include<bits/stdc++.h>
using namespace std;
 int N;
 int status[1000005];
int prime()
{
  for(int i=3;i<=(int)sqrt(1000005);i+=2)
  {
      if(status[i]==0)
        for(int j=2*i;j<=1000005;j+=i)
        status[j]=1;
  }
  return 0;
}
int main()
{
    int n;
    prime();
    cin>>n;
    for(int i=4;i<=n;i++)
    {
        if(i%2==0&&(n-i)%2==0)
        {
            cout<<i<<" "<<n-i;
            return 0;
        }
        if(i%2==0&&(n-i)%2==1)
        {
            if(status[n-i]==1)
            {
                cout<<i<<" "<<n-i<<endl;
                return 0;
            }
        }
        if(i%2==1&&(n-i)%2==0)
        {
            if(status[i]==1)
            {
                cout<<i<<" "<<n-i<<endl;
                return 0;
            }
        }
        if(i%2==1&&(n-i)%2==1)
        {
            if(status[n-i]==1&&status[i]==1)
            {
                cout<<i<<" "<<n-i<<endl;
                return 0;
            }
        }
    }
}

