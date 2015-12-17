// constructing vectors
#include <iostream>
#include <vector>
using namespace std;
int main ()
{
  unsigned int i;

  // constructors used in the same order as described above:
  vector<int> first;                                // empty vector of ints
  vector<int> second (4,100);                       // four ints with value 100
  vector<int> third (second.begin(),second.end());  // iterating through second
  vector<int> fourth (third);                       // a copy of third
  vector<int>::iterator it;
  vector<int>v(0);
  // the iterator constructor can also be used to construct from arrays:
  int myints[] = {16,2,77,29};
  vector<int> fifth (myints, myints + sizeof(myints) / sizeof(int) );

  cout << "The contents of fifth are:";
  for (it = fifth.begin(); it != fifth.end(); ++it)
  cout << ' ' << *it;
  cout << '\n';
  for(int i=0;i<10;i++)
    cout<<v[i]<<" ";
  return 0;
}
