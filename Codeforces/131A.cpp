#include<bits/stdc++.h>
using namespace std;
int main()
{
   char s[200],c;
   int cnt=0;
   cin>>s;
   if(islower(s[0]))
   {
   cnt++;
   for(int i=1;i<strlen(s);i++)
   {
     if(isupper(s[i]))
     cnt++;
   }
    if(cnt==strlen(s))
    {
   c=toupper(s[0]);
   cout<<c;
   for(int i=1;i<strlen(s);i++)
    {
      c=tolower(s[i]);
      cout<<c;
    }
   }
   else
   cout<<s;
   }
   else if(isupper(s[0]))
   {
   cnt=0;
      for(int i=0;i<strlen(s);i++)
      {
        if(isupper(s[i]))
        cnt++;
      }
      if(cnt==strlen(s))
      for(int i=0;i<strlen(s);i++)
      {
       c=tolower(s[i]);
       cout<<c;
      }
      else
      cout<<s;
   }
   else
   cout<<s<<endl;
}
