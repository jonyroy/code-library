#include<bits/stdc++.h>
using namespace std;
bool jony(int n)
{
    int m=log10(n)+1,b[50]={0};
    for(int i=1;i<=m;i++)
    {
       b[n%10]++;
       n/=10;
    }
    for(int i=0;i<=10;i++)
        if(b[i]>1)
        return false;
   return true;
}
int main()
{
     int n;
     cin>>n;
     n++;
     while(1)
     {
       bool f=jony(n);
       if(f)
       {
           cout<<n<<endl;
           return 0;
       }
       n++;
     }
    return 0;
}
