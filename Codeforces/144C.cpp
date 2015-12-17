#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<cstring>
#include<stdbool.h>
using namespace std;
int main()
{
    string str,s,sh;
    bool test;
    long int coun[200]={0},c[200],sum,mn=0;
    cin>>str>>s;
    long int l,len;
    len=str.size();
    l=s.size();
    for(long int i=0;i<l;i++)
    coun[s[i]]++;
    for(long int i=0;i<len-l+1;i++)
    {
        memset(c,0,sizeof(c));
        test=false;
        sum=0;
       sh=str.substr(i,l);
       for(long int j=0;j<l;j++)
       c[sh[j]]++;
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
       if(test==true)
        continue;
       if(sum==c[63])
       mn++;
    }
    cout<<mn<<endl;
    return 0;
}
