#include<bits/stdc++.h>
typedef int  I;
typedef long  L;
typedef float  FL;
typedef double  D;
typedef long long LL;
typedef vector<int>VI;
typedef pair<int,int> PII;
typedef long double  LD;
typedef vector<long int>VL;
typedef unsigned long long ULL;
int main()
{
   string s;
   cin>>s;
   int len=s.size();
   int i=0;
   bool test=false;
   while(i<len)
   {
       if(s[i]!='1'){
        cout<<"NO\n";
        test=true;
        break;
       }
       else
       {
           if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
            i=i+3;
           else if(s[i]=='1'&&s[i+1]=='4')
            i=i+2;
           else if(s[i]=='1')
            i=i+1;
           else
           {
               cout<<"NO\n";
               test=true;
               break;
           }
       }
   }
   if(!test)
     cout<<"YES\n";
return 0;
}
