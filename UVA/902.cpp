#include<string.h>
#include<iostream>
#include<stdio.h>
#include<queue>
#include<map>
using namespace std;
int main()
{
	int i,j,n,p,l,c,k,x;
	string str,sub,prv;
	map<string,int> m;
    map<string,int>::iterator it;
	while(cin>>n>>str)
	{
	    l=str.size();
	    p=0;
	    prv=str.substr(0,n);
	    for(i=0;i<=l-n;i++)
	    {
	       sub=str.substr(i,n);
           m[sub]++;
	    }
	    p=1;
    for (it=m.begin();it!=m.end();it++)
    {
      if((*it).second>p)
       {
        p=(*it).second;
        prv=(*it).first;
       }
    }
	    cout<<prv<<endl;
	    m.clear();
	}
	return 0;
}
