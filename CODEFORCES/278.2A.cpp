#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b=0,n;
    cin>>a;
    if(a<0)
    {
       a=a*(-1);
       while(1)
       {
         if(a==0)
         {
           while(1){
           a++;
           b++;
           n=a;
           while(n)
           {
               int m=n%10;
               n/=10;
               if(m==8)
               {
                   cout<<b<<endl;
                   return 0;
               }
            }
           }
         }
         else
         {
             a--;
             b++;
             n=a;
             while(n)
             {
                 int m=n%10;
                 n/=10;
                 if(m==8)
                 {
                     cout<<b<<endl;
                     return 0;
                 }
             }
         }
       }
    }
    else
    {
        while(1)
        {
           a++;
           b++;
           n=a;
           while(n)
           {
               int m=n%10;
               n/=10;
               if(m==8)
               {
                   cout<<b<<endl;
                   return 0;
               }
            }
         }
    }
    return 0;
}
