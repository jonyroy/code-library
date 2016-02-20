#include<bits/stdc++.h>
using namespace std;
int main()
{
  string str,s;
  int n,loc=0;
  cin>>str>>n;
  int len=str.size();
  int j=0;
  while(j<len)
  {
    loc=0;
    int m=-87,test=0;
    for(int i=1;i<=n&&len-1;i++)
    {
      if(j+i<str.size()){
      if(str[j+i]-'0'>m)
       {
         m=str[j+i]-'0',loc=j+i;
         test=1;
       }}
       else
       break;
    }
    if(test)
    if(str[j]<str[loc]){
    char t=str[loc];
    for(int i=loc;i>j;i--)
    str[i]=str[i-1];
    str[j]=t;
    n=n-(loc-j);
    }
    j++;
  }
  cout<<str<<endl;
}
