#include<bits/stdc++.h>
using namespace std;
int bulul(int a,string poky)
{
    string b;
    while(a)
    {
        int c=a%10;
        if(c==4)
        {
          b+=('4');
        }
        else if(c==7)
            b+='7';
        a=a/10;
    }
    reverse(b.begin(),b.end());
    if(poky==b)
        return 1;
    else
        return 0;
}
int main()
{
   int a;
   string poky;
   cin>>a>>poky;
   a++;
   while(1)
   {
     int t=bulul(a,poky);
     if(t)
     {
         cout<<a<<endl;
         return 0;
     }
     a++;
   }
   return 0;
}
