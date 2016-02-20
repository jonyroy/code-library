#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,s,sh;
    bool test=false;
    long int coun[200]={0},c[200]={0},sum=0,mn=0;
    cin>>str>>s;
    long int l,len;
    len=str.size();
    l=s.size();
    if(l>len)
    {
        cout<<0<<endl;
        return 0;
    }
    for(long int i=0;i<l;i++)
    coun[s[i]]++;
    for(long int j=0;j<l;j++)
    c[str[j]]++;
    for(int j=97;j<=122;j++)
    {
           if(c[j]>coun[j])
           {
               test=true;
               break;
           }
           if(c[j]<=coun[j])
           sum=sum+(coun[j]-c[j]);
    }
    if(sum==c[63]&&test==false)
    mn++;
    for(long int i=1;i<len-l+1;i++)
    {
       test=false;
       sum=0;
       c[str[i-1]]--;
       c[str[i+l-1]]++;
       for(int j=97;j<=122;j++)
       {
           if(c[j]>coun[j])
           {
               test=true;
               break;
           }
           if(c[j]<=coun[j])
           sum=sum+(coun[j]-c[j]);
       }
       if(sum==c[63]&&test==false)
       mn++;
    }
    cout<<mn<<endl;
    return 0;
}
