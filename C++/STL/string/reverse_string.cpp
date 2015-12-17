// string::rbegin and string::rend
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("now step live...");
  string::reverse_iterator rit;
  for ( rit=str.rbegin() ; rit < str.rend(); rit++ )
    cout << *rit;
  return 0;
}
