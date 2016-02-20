// resizing string
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  size_t sz;
  string str ("I like to code in C");
  cout << str << endl;

  sz=str.size();

  str.resize (sz+2,'+');
  cout << str << endl;

  str.resize (14);
  cout << str << endl;
  return 0;
}
