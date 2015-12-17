// string::begin and string::end
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("Test string");
  string::iterator it;
  for ( it=str.begin() ; it < str.end(); it++ )
    cout << *it;
  return 0;
}
