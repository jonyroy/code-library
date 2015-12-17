// constructing sets
#include <iostream>
#include <set>
using namespace std;
int main ()
{
  set<int> first;                           // empty set of ints
  int myints[]= {10,20,30,40,50};
  set<int> second (myints,myints+5);        // range
  set<int> third (second);                  // a copy of second
  set<int> fourth (second.begin(), second.end());  // iterator ctor.
  set<int>fifth;
  int n;
  while(cin>>n&&n>0)
  {
       fifth.insert(n);
  }
      fifth.erase(5);
      cout<<fifth.size()<<endl;
  set<int>::iterator it;
  for(it=fifth.begin();it!=fifth.end();it++)
    cout<<*it<<" ";
  fifth.clear();
  cout<<fifth.size()<<endl;
  return 0;

}
