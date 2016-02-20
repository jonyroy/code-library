#include<bits/stdc++.h>
using namespace std;
int main()
{
    int fact[15]={1,1,2,6,24,120,720,5040,40320,362880,3628800};
    string s,ss;
    cin>>s>>ss;
    int cnt=0,cn=0,c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
        cnt++;
        else
        cnt--;
       if(ss[i]=='+')
        cn++;
       else if(ss[i]=='-')
        cn--;
       else
        c++;
    }
    int cpp;
    if(cnt>=cn)
     cpp=cnt-cn;
     else
     cpp=cn-cnt;
     if(cpp<0)
        cpp*=(-1);
     if(cpp>c)
     {
         printf("0.000000000000");
         return 0;
     }
     else if(cpp==c)
     {
         double cp=pow(2.0000,(double)c);
         double jo=(double)1.0/cp;
         printf("%.12lf",jo);
         return 0;
     }
     int i=0,j=c;
     long v=0;
     while(i<=j)
     {
         if(j-i==cpp)
         {
             v=v+fact[c]/(fact[i]*fact[j]);
         }
         i++,j--;
     }
     double cp=pow(2.0000,(double)c);
     double jo=(double)v/cp;
     printf("%.12lf",jo);
    return 0;
}
