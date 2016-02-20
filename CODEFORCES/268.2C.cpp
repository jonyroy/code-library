#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   if(n<=3)
    cout<<"NO";
   else
   {
       cout<<"YES\n";
       if(n%2==0)
       {
           while(n>4)
           {
               cout<<n<<" - "<<n-1<<" = "<<1<<endl;
               cout<<n-2<<" * "<<1<<" = "<<n-2<<endl;
               n=n-2;
           }
           cout<<4<<" * "<<3<<" = "<<12<<endl;
           cout<<12<<" * "<<2<<" = "<<24<<endl;
           cout<<24<<" * "<<1<<" = "<<24<<endl;
       }
       else
       {
           while(n>5)
           {
               cout<<n<<" - "<<n-1<<" = "<<1<<endl;
               cout<<n-2<<" * "<<1<<" = "<<n-2<<endl;
               n=n-2;
           }
           cout<<5<<" - "<<1<<" = "<<4<<endl;
           cout<<4<<" - "<<2<<" = "<<2<<endl;
           cout<<4<<" * "<<3<<" = "<<12<<endl;
           cout<<12<<" * "<<2<<" = "<<24<<endl;
       }
   }
}
