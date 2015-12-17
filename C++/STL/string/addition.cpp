// string::operator+=
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string name ("John");
  string family ("Smith");
  name += " K. ";         // c-string
  name += family;         // string
  name += '\n';           // character

  cout << name;
  return 0;
}
