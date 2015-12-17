// string::clear
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
  char c;
  cout << "Please type some lines of text. Enter a period to finish:\n";
  do {
    c=cin.get();
    str += c;
    if (c=='\n')
    {
       cout << str;
       str.clear();
    }
  } while (c!='.');
  return 0;
}
