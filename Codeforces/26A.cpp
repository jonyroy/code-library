#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    bool t;
    cin>>n;
    for(int i=6;i<=n;i++)
    {
        int coun=0;
        t=false;
        int m=i;
        for(int j=2;j<=sqrt(m);j++)
            {
              while(!(m%j))
              {
                 m=m/j;
                 t=true;
              }
              if(t)
              {
                  coun++;
                  t=false;
              }
            }
            if(m!=1)
                coun++;
                if(coun==2)
                    count++;
    }
    cout<<count;
    return 0;
}
