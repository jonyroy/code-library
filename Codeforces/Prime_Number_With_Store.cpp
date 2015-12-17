#include<bits/stdc++.h>
using namespace std;
#define N 101000
int status[N],store[N],cn=1;
int Prime_Number()
{
   int i,j,sqrtN=(int)sqrt(N);
   store[cn++]=2;
   for(i=3;i*i<=N;i+=2)
    {
      if(status[i]==0)
        {
          store[cn++]=i;
          for(j=i*i;j<=N;j+=i+i)
          status[j]=1;
        }
    }
    status[1]=1;
    if(i%2==0)
        i++;
    for(int k=i;k<=N;k+=2)
        if(status[k]==0)
        store[cn++]=k;
  return 0;
}
int main()
{
    Prime_Number();
    int n;
    while(cin>>n)
    {
        if(n%2==0&&n!=2)
            cout<<"This Number Is Not Prime.\n";
        else if(status[n])
            cout<<"This Number Is Not Prime.\n";
        else
            cout<<"This Number Is  Prime.\n";
    }
    return 0;
}
