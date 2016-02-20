#include<iostream>
//#include<string>
using namespace std;
int i,n,p;
string s;
int main()
{
cin>>n;
for(i=0; i<n; i++)
{
cout<<"enter the word"<<endl;
cin>>s;
p=s.size();
if(p>=10)
cout<<s[0]<<p-2<<s[p-1]<<endl;
else
cout<<s<<endl;
}
}
