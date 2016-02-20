#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,cnt=0;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        {
            int cn=0;
           cin>>a;
           while(a)
            {
               int b=a%10;
               a=a/10;
               if(b==7||b==4)
                cn++;
            }
            if(cn<=k)
                cnt++;
        }
        cout<<cnt;
}
