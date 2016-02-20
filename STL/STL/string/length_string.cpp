// string::length
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str ("Test string");
  getline(cin,str);
  cout << "The length of str is " << str.length() << " characters.\n";
  return 0;
}
