#include<bits/stdc++.h>
using namespace std;
vector<int>v,b;
int jony;
int div_rem(string dividend,long long int divisor1,long long int div)
{
    long long int k,i,tem,remainder,len;
    len=dividend.size();
    remainder=0;
    for(i=0;i<len;i++)
    {
      tem=remainder*10+dividend[i]-48;
      remainder=tem%divisor1;
      if(remainder==0&&dividend[i+1]!='0')
      {
        v.push_back(i);
      }
    }
    for(int i=0;i<v.size();i++)
    {
        bool t=false;
        remainder=0;
       for(i=v[i]+1;i<len;i++)
       {
         tem=remainder*10+dividend[i]-48;
         remainder=tem%div;
         t=true;
       }
       if(t==true&&remainder==0)
       {
           jony=v[i];
           return 1;
       }
    }
    return 0;
}
int main()
{
    string a,b;
    vector<int>jo;
    long long int n,m,len;
    cin>>a>>n>>m;
    int j=div_rem(a,n,m);
    if(j)
    {
        cout<<"YES\n";
        for(int i=0;i<=jony;i++)
            cout<<a[i];
        cout<<endl;
        for(int i=jony+1;i<a.size();i++)
            cout<<a[i];
    }
    else
        cout<<"NO\n";
    return 0;
}
