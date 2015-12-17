#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,m,j,f,mi,s;
    cin>>a>>b;
    if(a==b)
     f=0,mi=6,s=0;
    else if(a<b)
    {
        if((b-a)%2==0)
        {
            int jo=(a+b)/2;
            f=jo-1,mi=1,s=6-jo;
        }
        else
        {
            int jo=(a+b)/2;
            f=jo,mi=0,s=6-jo;
        }
    }
    else
    {
      if((a-b)%2==0)
      {
          int jo=(a+b)/2;
          f=6-jo,mi=1,s=jo-1;
      }
      else
      {
          int jo=(a+b)/2;
          f=6-jo,mi=0,s=jo;
      }
    }
    cout<<f<<" "<<mi<<" "<<s<<endl;
    return 0;
}
