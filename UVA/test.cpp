#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str,s;
   getline(cin,str);
   for(int i=0;i<=str.size();i++)
   {
       if(str[i]=='-'||str[i]==','||i==str.size())
       {
           int n;
           if(s.size()>=1){
           n=atoi(s.c_str());
           s.clear();
           cout<<n<<" ";
           }
       }
       else
        s+=str[i];
   }
  return 0;
}
